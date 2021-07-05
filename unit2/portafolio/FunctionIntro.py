

from sys import argv as ar

def evenorodd(number):
    if (number%2 == 0):
        print("The answer is even")
    else:
        print("The answer is not even")


def addtwonumbers(num1, num2):
    print("Program Finished: Two Numbers Added")
    return num1 + num2

##Homework

def isitPrime(numb):
   a= 1
   for idx in range(1, numb ):
       if (numb%idx == 0):
           a= a+1
    
   if(a<= 2):
      return True
   else:
      return False
    

##

answer= False

if __name__ == "__main__":
    ##print (f'La suma de los números es: {addtwonumbers(int(ar[1]),int(ar[2]))}')
    num1= int(input("Enter the first number: \t"))
    num2= int(input("Enter the second number:\t"))

    print(f'The sum of the two numbers is: {addtwonumbers(num1, num2)}')
    answer= evenorodd(addtwonumbers(num2,num2))

    ##Homework
    no1= int(input("Please enter the first number: "))
    no2= int(input("Please enter the second number: "))

    if isitPrime(no1):
        print(f'The number {no1} is a prime number')
    else:
        print(f'The number {no1} is not a prime number')


    if isitPrime(no2):
        print(f'The number {no2} is a prime number')
    else:
        print(f'The number {no2} is not a prime number')
    ##
