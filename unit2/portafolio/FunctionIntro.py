from sys import argv as ar

def addtwonumbers(num1, num2):
    print("Program Started: Adding Two Numbers...")
    return num1 + num2

if __name__ == "__main__":
    print (f'La suma de los números es: {addtwonumbers(int(ar[1]),int(ar[2]))}')