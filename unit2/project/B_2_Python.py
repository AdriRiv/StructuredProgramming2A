

import sys 



indx= 0 

def divisible3and5(indx):
    for indx in range(0, 500):
        if(indx%3 ==0 ):
            if (indx%5 == 0 ):
                print(f'This number is divisible by 3 and 5: ', indx)   

if __name__ == "__main__":
    
    divisible3and5(indx)