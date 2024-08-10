from collections import deque
n, m = map(int, input().split())
grid = [list(map(int, input().split())) for _ in range(n)]
dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]

def bfs(n, m, grid):
    queue = deque([(0, 0)])
    visited = [[False] * m for _ in range(n)]
    visited[0][0] = True
    
    while queue:
        x, y = queue.popleft()
        if x == n - 1 and y == m - 1:
            return True
        
        for i in range(4):
            nx, ny = x + dx[i], y + dy[i]
            if 0 <= nx < n and 0 <= ny < m and not visited[nx][ny] and grid[nx][ny] == 1:
                visited[nx][ny] = True
                queue.append((nx, ny))
    return False

if grid[0][0] == 1 and grid[n-1][m-1] == 1:
    if bfs(n, m, grid):
        print(1)
    else:
        print(0)
else:
    print(0)