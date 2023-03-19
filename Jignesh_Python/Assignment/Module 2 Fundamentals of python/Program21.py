def string(word):
    if len(word) % 4 == 0:
        return word[::-1]
    return word

text = input("Enter the string : ")
result = string(text)
print("Final String is : ", result)
