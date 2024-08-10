from collections import deque
n, k = map(int, input().split())
grid = [list(map(int, input().split())) for _ in range(n)]

start_points = [tuple(map(int, input().split())) for _ in range(k)]
def bfs(start_x, start_y, n, grid, visited):
    queue = deque([(start_x, start_y)])
    visited[start_x][start_y] = True
    area_size = 0

    directions = [(-1, 0), (1, 0), (0, -1), (0, 1)]

    while queue:
        x, y = queue.popleft()
        area_size += 1
        
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n and not visited[nx][ny] and grid[nx][ny] == 0:
                visited[nx][ny] = True
                queue.append((nx, ny))

    return area_size

def process_grid(n, grid, start_points):
    visited = [[False] * n for _ in range(n)]
    results = []

    for (start_x, start_y) in start_points:
        start_x -= 1
        start_y -= 1
        if not visited[start_x][start_y]:
            area_size = bfs(start_x, start_y, n, grid, visited)
            results.append(area_size)

    return sum(results)

total_area_size = process_grid(n, grid, start_points)
print(total_area_size)