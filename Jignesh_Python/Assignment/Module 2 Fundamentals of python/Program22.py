string = input("Enter a string : ")

if len(string) > 1:
    print(string[:2]+string[-2:])
else:
    print('Empty string')