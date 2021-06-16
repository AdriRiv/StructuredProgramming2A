
import sys

a= int(input("Inserte el valor de A: "))
b= int(input("Inserte el valorgit push
 de B: "))

print(f"Initial values A: {a}, B: {b}")

if __name__ == "__main__":
    print("Swap Program")
    temp = a
    a= b 
    b= temp
    print(f"New Values A: {a}, B: {b}")
