"""
*args : arguments (tuple as parameter)

**kwrgs : key with arguments (dictionary as a parameter)
"""
# normal function with normal parameter
def sum(n1,n2): #2 arguments
    ans = n1 + n2
    print(ans)

sum(10,20)   #2 parameter


#args function

def addition(*n): # *n is a tuple
    ans = 0
    for i in n:
        ans += i
    print(ans) 

addition(10,20,45,15)

#dictionary with parameter

def myfun(**kwrgs):
    for k,v in kwrgs.items():
        print(f"{k} = {v}")

myfun(name="Jignesh",subject="Python")