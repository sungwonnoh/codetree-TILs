n, m = map(int, input().split())
arr = [list(map(int, input().split())) for _ in range(n)]
cnt = 0

def happy(arr):
    max_cnt=1
    cnt=1
    for k in range(len(arr)-1):
        if arr[k]==arr[k+1]:
            cnt+=1
        else:
            max_cnt=max(max_cnt, cnt)
            cnt=1
    max_cnt=max(max_cnt,cnt)
    return max_cnt>=m

for i in range(n):
    row=[]
    col=[]
    for j in range(n):
        row.append(arr[i][j])
        col.append(arr[j][i])
    ans_row=happy(row)
    ans_col=happy(col)

    if ans_col:
        cnt+=1
    if ans_row:
        cnt+=1
print(cnt)