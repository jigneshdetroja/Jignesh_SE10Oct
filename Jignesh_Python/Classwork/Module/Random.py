import random

n = random.randint(1,10)
print(n)

subject = ["C","C++","Java"]

print(random.choice(subject))

#use for search the platforms of pc
import platform

print(platform.architecture())
print(platform.python_version())
print(platform.machine())
print(platform.processor())