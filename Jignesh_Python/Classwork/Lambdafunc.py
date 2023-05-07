"""
lambda function:
        function without any name is called lambda function
lambda function is anonymus

    syntax: 

filter() : filter is a method which os filter given sequence with the help of function that test each element of the sequence.

    syntax :

            filter(fun,sequence)

"""
#normal function
def sum(num1,num2):
    ans = num1 + num2
    return ans

print(sum(12,23))

#lambda function

ans = lambda num1,num2 : num1 + num2
print(ans(12,23))

#without filter in sequence
l1 = ['a','e','v','j','a']

vowel_list = ['a','e','i','o','u']

l2 = []

def checkVowel():
    for c in l1:
        if c in vowel_list:
            l2.append(c)

checkVowel()

for i in l2:
    print(i)

#filtered Function in sequence
l1 = ['a','e','v','j','a']

vowel_list = ['a','e','i','o','u']

def myfun(seq):
    if (seq in vowel_list):
        return True
    else:
        return False

filtered_data = filter(myfun,l1)

for i in filtered_data:
    print(i)

#use for Even num
data_set = [12,23,45,6,4,75,5,3,33,67]

def myfun(data):
    if data %2 ==0:
        return True
    else:
        return False
    
filtered_data = filter(myfun,data_set)

for i in filtered_data:
    print(i)