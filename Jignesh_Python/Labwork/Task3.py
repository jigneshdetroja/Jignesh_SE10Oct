kalyanjwellers ={
    "Ring" : 21000,
    "Neckless" :75000,
    "Bangal" :35000,

}
print("menu")
for k,v in kalyanjwellers.items():
    print(f"{k} : {v}")

cart = {}
status = True
while status:
    product_name = input("Enter your product name : ")
    
