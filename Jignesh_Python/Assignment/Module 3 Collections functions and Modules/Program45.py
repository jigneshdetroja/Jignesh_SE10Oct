# Python program to find the highest 3 values in a dictionary

from heapq import nlargest

dict = {'a' : 500, 'b' : 10000, 'c' : 870, 'e' : 98764}
three_largest = nlargest(3, dict, key = dict.get)

print(three_largest)
