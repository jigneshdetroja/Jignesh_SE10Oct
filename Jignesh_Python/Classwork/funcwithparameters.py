"""
function with paramneters and function without return type
"""

def myfun(num1,num2):
    print(num1)
    print(num2)

myfun(10,20)

#used for swap the num
def swap(num1,num2):
    print(num1)
    print(num2)
    num1,num2 = num2,num1
    print(num1)
    print(num2)

swap(100,200)