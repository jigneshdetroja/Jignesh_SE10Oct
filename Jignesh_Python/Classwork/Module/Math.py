import math

print(math.sqrt(64))
print(math.pow(2,5)) # 2*2*2*2*2
print(math.pi)
print(math.ceil(75.67))
print(math.floor(75.67))



#use for show date by manualy
from datetime import date

mydate = date(2023,3,22)

print("date = ",mydate)


#use for current date by automatic
current_date = date.today()

print("current_date : ",current_date)

#use for indivisual 
print(current_date.year)
print(current_date.month)
print(current_date.day)


#use for show the time
from datetime import time
t = time(9,45,25)

print(t)
