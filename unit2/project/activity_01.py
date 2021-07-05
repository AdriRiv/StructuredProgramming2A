
import sys


def isitPrime(numb):
   message("This is a function")
   count= 1
   for idx in range(1, numb ):
       if (numb%idx == 0):
           count= count+1
    
   if(count<= 2):
      print(f'The number {numb} is prime')
      return True
   else:
      print (f'The number {numb} is not prime')
      return False
    
def message(str):
    print(str)


def pow2nums(num1, num2):
    powNum1 = pow(num1, 2)
    powNum2 = pow(num2, 2)
    return (powNum1, powNum2)

if __name__ == "__main__":
    print (isitPrime( int(sys.argv[1])))
    print (isitPrime( int(sys.argv[2])))

    pow2nums(int(sys.argv[1]), int( sys.argv[2]))

    (x, y)= pow2nums(int(sys.argv[1]), int( sys.argv[2]))
    print(f'x= {x}, and y= {y}')
    

