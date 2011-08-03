import string 
import math


def isPrime(x, A):
	if x == 2:
		return 1
	for prime in A:
		if x%prime == 0:
			return 0
	
	return 1
	

	

###################################

primes = []
num = 2
count = 0

#for num in range(2,100):
while count < 10001:
	if isPrime(num, primes):
		primes.append(num)
		count += 1
	num += 1	
print primes