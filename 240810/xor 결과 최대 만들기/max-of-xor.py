import itertools
n,m=map(int,input().split())
arr = list(map(int, input().split()))

def max_xor_subset(arr, m):
    max_xor = 0
    for subset in itertools.combinations(arr, m):
        xor_value = 0

        for num in subset:
            xor_value ^= num

        max_xor = max(max_xor, xor_value)
    
    return max_xor

result = max_xor_subset(arr, m)
print(result)