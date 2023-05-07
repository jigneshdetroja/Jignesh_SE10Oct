#keywords : A word which have predefined meaning

# A reserve word
# You can't tak it keyword as a variable
"""
for
while
break
continue
"""

#use for keywordlist

import keyword

keyword_list = keyword.kwlist

#print(keyword_list)

name = input("Enter Name : ")

if name in keyword_list:
    print("yes its a keyword")
else:
    print("no, its not a keyword")