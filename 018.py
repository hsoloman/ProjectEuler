# Input triangle.

# 75
# 95 64
# 17 47 82
# 18 35 87 10
# 20 04 82 47 65
# 19 01 23 75 03 34
# 88 02 77 73 07 63 67
# 99 65 04 28 06 16 70 92
# 41 41 26 56 83 40 80 70 33
# 41 48 72 33 47 32 37 16 94 29
# 53 71 44 65 25 43 91 52 97 51 14
# 70 11 33 28 77 73 17 78 39 68 17 57
# 91 71 52 38 17 14 91 43 58 50 27 29 48
# 63 66 04 68 89 53 67 30 73 16 69 87 40 31
# 04 62 98 27 23 09 70 98 73 93 38 53 60 04 23


# How to save this triangle?
#   List of lists could work.

# How to index this triangle?
#   [row][place]
#   down and left would be [i+1][j]
#   down and right would be [i+1][j+1]

# Check bounds for end of row?
#   j must be <= i

# Check bounds for last row?
#   No need. Just foreach the rows.

# path_sum(input) can be memoized

# path_sum([l, l, l]) is different that path_sum([l, r, l]), for example

# What can be stored? At every [i][j], store max path_sum at [i][j]

# max path_sum at [i][j] could be from max path_sum at [i-1][j-1] or at [i-1][j]

# mps(i, j) = val(i, j) + max( mps(i-1, j-1), mps(i-1, j) ), within bounds.


values = [
    [75],
    [95, 64],
    [17, 47, 82],
    [18, 35, 87, 10],
    [20,  4, 82, 47, 65],
    [19,  1, 23, 75,  3, 34],
    [88,  2, 77, 73,  7, 63, 67],
    [99, 65,  4, 28,  6, 16, 70, 92],
    [41, 41, 26, 56, 83, 40, 80, 70, 33],
    [41, 48, 72, 33, 47, 32, 37, 16, 94, 29],
    [53, 71, 44, 65, 25, 43, 91, 52, 97, 51, 14],
    [70, 11, 33, 28, 77, 73, 17, 78, 39, 68, 17, 57],
    [91, 71, 52, 38, 17, 14, 91, 43, 58, 50, 27, 29, 48],
    [63, 66, 4, 68, 89, 53, 67, 30, 73, 16, 69, 87, 40, 31],
    [4, 62, 98, 27, 23, 9, 70, 98, 73, 93, 38, 53, 60, 4, 23],
]

# This should be the same shape as values when completely filled.
memo = []


def mps(i, j):
    # Do a memoize check at the top. If there is a memoized value, return that.

    # Add calculated value to memoization before returning it.

    return 0


# Short example.
# By starting at the top of the triangle below and moving to adjacent numbers on the row below, the maximum total from top to bottom is 23.

# 3
# 7 4
# 2 4 6
# 8 5 9 3

# That is, 3 + 7 + 4 + 9 = 23.