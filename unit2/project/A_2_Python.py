
import sys 

add=0
product=0 
division=0 
subs=0 
num1=0 
num2=0 

if __name__ == "__main__":
    num1= int( sys.argv[1])
    num2= int (sys.argv[2])

    ##Addition 
    add=num1+num2
    ##Substraction
    subs= num1-num2
    ##Product
    product= num1*num2
    ##Division
    division= num1/num2

    print(f'The addition of the two numbers is: {add}')
    print(f'The substraction of the two numbers is: {subs}')
    print(f'The product of the two numbers is: {product}')
    print(f'The division of the two numbers is: {division}')