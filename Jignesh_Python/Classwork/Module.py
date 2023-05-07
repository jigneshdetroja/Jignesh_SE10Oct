import math

# factorial number :

# 5 : 120

# 5 : 5*4*3*2*1

# take one variable which contain 1 value
f = 1
#without using inbult module
# accept number from user
num = int(input("Enter Num : "))

# continous mupltiple num with f value

for i in range(1,num+1): #num = 5 (1,6)
    f *= i # 1*=1 # 1*=2 #2*=3

print(f)

#with using inbult module
num = int(input("Enter num : "))

f = math.factorial(num)

print(f)