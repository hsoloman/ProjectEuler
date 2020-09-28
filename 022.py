# read names.txt
# sort file by alphabet
# alphabetical value for each name
# multiply by position in list

def a_value(name):
    sum = 0
    name = name.lower().strip("\"")
    for c in name:
        val = ord(c) - ord('a') + 1
        sum += val
    return sum


names = []
with open("022_names.txt", "r") as f:
    names = f.read()
    names = names.split(",")

names.sort()
sum = 0
for i, name in enumerate(names):
    sum += (i+1) * a_value(name)

print("sum ", sum)
