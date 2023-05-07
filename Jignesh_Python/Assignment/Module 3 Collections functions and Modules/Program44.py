# Python program to create and display all combinations of letters,
#selecting each letter from a different key in a dictionary. 
import itertools

d = {'1':['jignesh','prashant'],'2':['x','y']}

for combo in itertools.product(*[d[k] for k in sorted(d.keys())]):
    print(''.join(combo))