n=int(input())
block=[input() for _ in range(n)]
s1,e1=map(int, input().split())
s2,e2=map(int, input().split())

s1 -= 1
e1 -= 1
s2 -= 1
e2 -= 1
block = block[:s1] + block[e1+1:]
block=block[:s2]+block[e2+1:]
print(len(block))
print(*block, sep="\n")