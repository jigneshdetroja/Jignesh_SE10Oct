l = [2,3,4,5,7]
sublist = [4,2,7]
c= 0

res = "True"
for i in sublist:
    if i in l:
        c+=1
if (c==len(sublist)):
    res

print("this sublist present in list : ",res)

