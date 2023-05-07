# private mode : access modifier (visibility mode) which is accessible oby within class
# private used under the class only not outside

# product name class
class Product:
    # constructor
    def __init__(self):
        self.__mobile = 15000 # private
        self.laptop = 25000

    # display method
    def display(self):
        print("mobile ",self.__mobile)
        print("laptop ",self.laptop)

    # data change using method
    def changeData(self,mobileNewPrice):
        self.__mobile = mobileNewPrice

# object
obj = Product()
obj.display()

# change mobile and laptop price
obj.__mobile = 18000 #outside the class using underscore 
obj.laptop = 35000 

obj.display()

print("change data using method ")

#change method
obj.changeData(19000)
obj.display()