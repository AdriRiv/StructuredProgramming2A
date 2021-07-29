import sys 

num=int(input("Please enter a number to see if it is divisi ble by 3 and 5"))

indx= 0 

def divisible3and5(indx):
    if(indx%3 & indx%5 == 0 ):
        print(f'This number is divisible by 3 and 5')   



if __name__ == "__main__":
    
    divisible3and5(num)