import sys

a= int(input("Write the first number: "))
b= int(input("Write the second number: "))

print(f'Initial values: a= {a}  and  b= {b}')

def swapValues(par1, par2):
    global a
    global b
    temp = a
    a=b
    b= temp


if __name__ == "__main__":
    print("Swap program")
    #With functions :   swapValues(a, b)

    a, b= b, a
    print(f'New values:  a={a}  and  b={b}')