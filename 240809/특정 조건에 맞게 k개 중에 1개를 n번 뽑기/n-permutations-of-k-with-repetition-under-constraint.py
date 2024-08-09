k,n=map(int, input().split())
nums=[]

def find_set(cnt):
    if cnt==n:
        for num in nums:
            print(num, end=" ")
        print()
        return
    for i in range(1, k+1):
        if cnt>=2 and i==nums[-1] and i ==nums[-2]:
            continue
        else:
            nums.append(i)
            find_set(cnt+1)
            nums.pop()

find_set(0)