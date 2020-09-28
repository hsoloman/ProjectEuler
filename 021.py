# where n
# d(n) is the sum of proper divisors of n
# proper divisors of n: numbers < n and n%number == 0
# only need to go up to the square root of n

def d(n):
    sum = 0
    for i in range(1, n):
        if n%i == 0:
            sum += i
    return sum

map = {}
i = 1
sum = 0
for a in range(1, 10000):
    b = d(a)
    if b == a: 
        continue
    if d(b) == a and not b in map:
        map[a] = True
        print(f"Amicable pair ({a}, {b})")
        sum += a
        if b < 10000:
            sum += b 
    
print("Total of all amicable numbers under 10k:", sum)