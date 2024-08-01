n,t=map(int, input().split())
up=(list(map(int, input().split())))
down=(list(map(int, input().split())))

for _ in range(t):
    temp = up[n-1] #오른쪽 마지막
    for i in range(n - 1, 0, -1):
        up[i]=up[i-1]
    up[0] = down[n - 1]
    
    for i in range(n - 1, 0, -1):
        down[i] = down[i - 1]
    down[0] = temp

for i in up:
    print(i, end=" ")
print()

for i in down:
    print(i, end=" ")