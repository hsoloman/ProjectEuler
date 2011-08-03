import string 
import math

num = 600851475143


factor = 2

primeFactors = [1]


while (factor <= num):
	while(num%factor == 0):
		primeFactors.append(factor)
		num /= factor
	factor += 1			
	
	
print primeFactors
