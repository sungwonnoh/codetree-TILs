k,n=map(int, input().split())
selected=[]

def find_permutations(cnt):
    if cnt == n:
        for i in selected:
            print(i, end=" ")
        print()
        return
    
    for i in range(1, k + 1): # 1부터 k
        selected.append(i)
        find_permutations(cnt + 1)
        selected.pop()
find_permutations(0)