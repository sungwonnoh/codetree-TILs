n,m=map(int,input().split())
board=[]
for _ in range(n):
    board.append(list(map(int, input().split())))
def dfs(x, y, n, m, grid, visited):
    if x == n - 1 and y == m - 1:
        return True
    visited[x][y] = True
    directions = [(1, 0), (0, 1)]
    
    for dx, dy in directions:
        nx, ny = x + dx, y + dy
        
        if 0 <= nx < n and 0 <= ny < m and not visited[nx][ny] and grid[nx][ny] == 1:
            if dfs(nx, ny, n, m, grid, visited):
                return True
    return False

def is_escape_possible(n, m, board):
    visited = [[False] * m for _ in range(n)]
    
    if board[0][0] == 1 and board[n-1][m-1] == 1:
        return dfs(0, 0, n, m, board, visited)
    return False
if is_escape_possible(n, m, board):
    print(1)
else:
    print(0)