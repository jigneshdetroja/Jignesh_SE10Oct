number = int(input("Enter Number : "))
fact = 1

for i in range(1,number+1):
    fact = fact*i

print("The Factorial of %d = %d" %(number,fact))
