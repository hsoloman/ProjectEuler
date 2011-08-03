import string 
import math

sumOfSq = 0

sqOfSum = 0

sum = 0

for x in range(1,101):
	sum += x
	sumOfSq += x**2
	
sqOfSum = sum**2

diff = sqOfSum - sumOfSq

print diff