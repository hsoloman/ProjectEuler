import string 
import math

def reverse(text):
	Rtext = ""
	for index in range(len(text)):
		Rtext += text[ len(text) - index -1 ] 

	return Rtext

############

size = 1000

palindromes = []


for x in range(1,size):
	for y in range(1,size):
		product = x * y
		productText = str(product)
		RproductText = reverse(productText)
		Rproduct = int(RproductText)
		if Rproduct == product:
			palindromes.append(product)

pSet = set(palindromes)
pSet = sorted( list(pSet) )

#print palindromes

print pSet