LIMIT = 28123


# This is a brute force solution and could be much faster.
def is_abundant(n):
    sum = 0
    for i in range(1, n):
        if (n % i == 0):
            sum += i
            if (sum > n):
                return True
    return False


abundants = []
for i in range(1, LIMIT):
    if is_abundant(i):
        abundants.append(i)

map = {}
for i, i_val in enumerate(abundants):
    for j, j_val in enumerate(abundants, i):
        ij_val = i_val + j_val
        if ij_val > 28123:
            break
        map[ij_val] = True

sum = 0
for i in range(1, 28123):
    if i not in map:
        sum += i
print(sum)
