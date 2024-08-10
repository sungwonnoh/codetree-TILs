from collections import deque
n = int(input().strip())
r1, c1, r2, c2 = map(int, input().split())
knight_moves = [
    (2, 1), (2, -1), (-2, 1), (-2, -1),
    (1, 2), (1, -2), (-1, 2), (-1, -2)
]

def bfs(n, start, end):
    queue = deque([(start[0], start[1], 0)])
    visited = [[False] * n for _ in range(n)]
    visited[start[0]][start[1]] = True
    
    while queue:
        x, y, dist = queue.popleft()
        if (x, y) == end:
            return dist
        for dx, dy in knight_moves:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n and not visited[nx][ny]:
                visited[nx][ny] = True
                queue.append((nx, ny, dist + 1))
    return -1

start = (r1 - 1, c1 - 1) 
end = (r2 - 1, c2 - 1)    
result = bfs(n, start, end)
print(result)