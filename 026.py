def cycle_length(f):

    return 0


best = 0
best_length = 0
for i in range(1, 1000):
    if i % 2 == 0 or i % 5 == 0:
        continue
    temp_length = cycle_length(1/i)
    if temp_length > best_length:
        best = i
        best_length = temp_length
