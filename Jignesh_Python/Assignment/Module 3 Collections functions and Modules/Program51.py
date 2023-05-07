def pall(str):
    str = input("Enter string : ")
    if (str==str[::-1]):
        print("the string is palindrome")
    else:
        print("the string is not a palindrome")

print(pall(str))