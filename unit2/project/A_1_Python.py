

import sys

indx=1
avrg=0

def average(argv):
    avrg=0
    for indx in range(1, len(sys.argv) ):
        num1= int(sys.argv[indx])
        avrg= num1+avrg
        print(num1,avrg)
    avrg= avrg/(len(sys.argv)-1)
    print("The average of the numbers is: ", avrg)
       


if __name__ == "__main__":
    print("We are calculating the average, please wait\n")
    average(sys.argv)