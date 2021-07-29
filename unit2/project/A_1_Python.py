import sys

indx=1
avrg=0

def average(argv):
    for indx in range(indx <= len(sys.argv) ):
        
        num1= int(sys.argv[indx])
        numid= num1
        indx= indx+1 
        avrg= num1+avrg
        print(num1, numid, indx, avrg)
       

        avrg= avrg/indx

if __name__ == "__main__":
    
    print(f'The average of the numbers you inserted is: {avrg}')
