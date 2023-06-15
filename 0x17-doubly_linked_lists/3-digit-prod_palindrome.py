#!/usr/bin/python3
from functools import reduce

max_var = 0

def is_palindrome(string):
	size = len(string)
	if size == 1:
	    return True
	array = [(string[i], string[-i-1]) for i in range(int(len(string)/2))]
	return reduce((lambda x,y: x == y), array)


for i in range(100, 1000):
    for j in range(100, 1000):
        product = i * j
        str_product = str(product)
        if is_palindrome(str_product):
            if max_var < product:
                max_var = product

print(f"largest palindrome is {max_var}")
