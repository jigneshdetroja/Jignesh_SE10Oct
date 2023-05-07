# Python program to combine two dictionary adding values for
#common keys
from collections import Counter

a1 = {'a' : 2, 'b' : 3}
a2 = {'x' : 40, 'y' : 50}

a = Counter(a1) + Counter(a2)

print(a)