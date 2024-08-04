n, t = map(int, input().split())

left = list(map(int, input().split()))
right = list(map(int, input().split()))
under = list(map(int, input().split()))

for _ in range(t):
    temp_left = left[-1]
    temp_right = right[-1]
    temp_under = under[-1]

    for i in range(n - 1, 0, -1):
        left[i] = left[i - 1]
    for i in range(n - 1, 0, -1):
        right[i] = right[i - 1]
    for i in range(n - 1, 0, -1):
        under[i] = under[i - 1]

    left[0] = temp_under
    right[0] = temp_left
    under[0] = temp_right

print(" ".join(map(str, left)))
print(" ".join(map(str, right)))
print(" ".join(map(str, under)))