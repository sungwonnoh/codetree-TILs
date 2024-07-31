n= int(input())
array=[]
for i in range(n):
    array.append(list(input().strip()))
k=int(input())-1

dx = [1, 0, -1, 0]
dy = [0, -1, 0, 1]

def changeDir(light,mirror):
    if mirror=='/':
        return [1,0,3,2][light]
    else: #'\'
        return [3,2,1,0][light]
def inRange(x,y,n):
    return 0<=x<n and 0<=y<n

# 진입 지점에 따라 시작 위치와 방향
start_dir, start_num = divmod(k, n)

if start_dir == 0:  # 위에서 진입할 때
    x, y = 0, start_num
elif start_dir == 1:  # 오른쪽
    x, y = start_num, n - 1
elif start_dir == 2:  # 아래
    x, y = n - 1, n - start_num - 1
else:  # 왼쪽
    x, y = n - start_num - 1, 0
now = start_dir
step=0
while True:
    step +=1
    if array[x][y] == "/":
        now = changeDir(now, '/')
    else:
        now = changeDir(now, '\\')

    x += dx[now]
    y += dy[now]

    if not inRange(x, y, n):
        break

print(step)