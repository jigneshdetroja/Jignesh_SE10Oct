"""
#1st Variant endvalue by default
for i in range(10):
    print (i)
    
#2nd Variant
for i in range(1,10):
    print(i)

#3rd variant
for i in range(2,50,2):
    print(i)


#4th Variant revers
for i in range(20,0,-1):
    print(i)
"""

#using forloop
n = int(input("Enter No :"))
sum=0
for i in range(1,n+1):
    sum=sum+i
    n=n-1
print("Sum : ",sum)
