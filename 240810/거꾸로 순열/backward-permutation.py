import itertools
n=int(input())
def permutations_reverse(n):
    numbers = list(range(1, n+1))
    permutations = itertools.permutations(numbers)

    sorted_permutations = sorted(permutations, reverse=True)
    
    for perm in sorted_permutations:
        print(' '.join(map(str, perm)))

permutations_reverse(n)