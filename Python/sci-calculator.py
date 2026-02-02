import math

def sci_calculator():
    while True:
        print("\n===== Scientific Calculator =====\n")
        print("1-Addition")
        print("2-Subtraction")
        print("3-Multiplication")
        print("4-Division")
        print("5-Pow (a^b)")
        print("6-Mod")
        print("7-GDC(a,b)") 
        print("8-LCM(a,b)") 
        print("0-Exit")       

        key = input("Enter an operation : ") 

        if key == "0":
            print("Exiting the System...")
            break

        number1 = float(input("Number 1 : "))
        number2 = float(input("Number 2 : "))
        
        if key == "1":
            print("Result: ",number1+number2)
        elif key =="2":
            print("Result: ",abs(number1-number2))
            #print("Result: ",(number1-number2) if number1>number2 else (number2-number1) )
        elif key =="3":
            print("Result: ",number1*number2)
        elif key == "4":
            print("Result: ","Error" if number2 == 0 else number1 / number2)
        elif key =="5":
            print("Result: ",number1**number2)
        elif key =="6":
            print("Result: ",number1%number2)
        elif key =="7":
            print("GDC = ",gcd(number1,number2))
        elif key =="8":
            print("LCM = ",lcm(number1,number2))
        else:
            print("Enter an Operation")

        
#GDC(Greatest Common Divisor - EBOB)
#LCM(Least Common Multiple - EKOK)
def gcd(a,b):
    while b!=0:
        a,b = b,a%b
    return a

def lcm(a,b):
    return abs(a*b)//gcd(a,b)

def main():
    sci_calculator()

if __name__=="__main__":
    main()