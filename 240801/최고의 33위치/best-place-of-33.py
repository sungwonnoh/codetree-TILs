n= int(input())
arr=[]
for _ in range(n):
    arr.append(list(map(int, input().split())))
ans =0
for i in range(0,n-2):
    for j in range(0,n-2):
        result=sum(
            arr[i + x][j + y] #리스트 컴프리헨션
            for x in range(3)
            for y in range(3)
        )
        ans = max(ans, result)
print(ans)