def addition():
    num1 = int(input("Enter number 1 : "))
    num2 = int(input("Enter number 2 : "))
    ans  = num1 + num2
    print(ans)

def mul():
    num1 = int(input("Enter number 1 : "))
    num2 = int(input("Enter number 2 : "))
    ans = num1 * num2
    print(ans)
    
def menu():
    data = """
                  Menu

            press 1 for addition
            press 2 for multiplication
           """
    print(data)
    choice = int(input("Enter your choice : "))
    if choice == 1:
        addition()
    elif choice == 2:
        mul()

menu()  #calling