
string = input("Please enter your own string : ")

chardict = {}

for num in string:
    keys = chardict.keys()
    if num in keys:
        chardict[num] += 1
    else:
        chardict[num] = 1

print(chardict)
