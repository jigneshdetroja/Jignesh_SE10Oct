"""
import random

n = random.randint(1,100)
print(n)
#use for one input for 2 times
l1 = ["Python","Java","Android","PHP"]
print(random.choice(l1))

t = ("Android","Java","C","Java","Php")

print(t.count("Java"))
"""
#use for change the tuple

t = ("Android","Java","C","Java","Php")
l1 = list(t) #casting into list
l1[0] = "Flutter"
t = tuple(l1) #recasting into tuple
print(t)