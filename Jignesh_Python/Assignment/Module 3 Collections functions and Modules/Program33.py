dict1= {1:10,2:20}
dict2 = {3:30,4:40}
dict3 = {}

for dict in(dict1,dict2):dict3.update(dict)
    
print(dict3)