"""
types of inheritance:

1) single levvel inheritance

2) multi level inheritance

3) multiple inheritance

4) hierarchical inheritance

5) hyrid inheritance

"""
#multi level inheritance

class GrandParent: 
    def land(self):
        print("LAND IN GUJARAT")

class Parent(GrandParent):
    def house(self):
        print("HOME AT AHMEDABAD")
    
class Child(Parent):
    def car(self):
        print("PURCHASE OWN CAR")
    
#create object of Child
obj = Child()

obj.land()
obj.house()
obj.car()

"""
we use two parent class and one child class 
"""
#multiple inheritance
#parent class
class A:
    def displayA(self):
        self.num1 = 10
#parent class    
class B:
    def displayB(self):
        self.num2 = 20
#child class     
class C(A,B):
    def displayRes(self):
        ans = self.num1 + self.num2
        print("num1 = ",self.num1)
        print("num2 = ",self.num2)
        print("ans = ",ans)

obj = C()
obj.displayA()
obj.displayB()
obj.displayRes()


"""
herieachical inheritance pattern
            A
            |
    -----------------
    B               C

hybrid inheritance pattern
            A
            |
    -----------------
    B               C
    |               |
    -----------------
            |
            D

"""
class X:
    def Student1(self):
        self.math = 65

class Y(X):
    def Student2(self):
        self.english = 73

class Z(Y):
    def StudentTotal(self):
        marks = self.math + self.english
        print("math = ",self.math)
        print("english = ",self.english)
        print("total = ",marks)

obj = Z()
obj.Student1()
obj.Student2()
obj.StudentTotal()