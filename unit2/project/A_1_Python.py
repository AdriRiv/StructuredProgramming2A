import sys

indx=1
avrg=0

if __name__ == "__main__":
    while(indx <= len(sys.argv[4]) ):

        num1= int(sys.argv[indx])
        numid= num1
        indx= indx+1 
        avrg= num1+avrg
        print(num1, numid, indx, avrg)
       

        avrg= avrg/indx
    print(f'The average of the numbers you inserted is: {avrg}')
