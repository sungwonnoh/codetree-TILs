import itertools
n=int(input())
def print_permutations(n):
    numbers = list(range(1, n+1))
    permutations = itertools.permutations(numbers)
    
    for perm in permutations:
        print(' '.join(map(str, perm)))
print_permutations(n)