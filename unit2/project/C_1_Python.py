import sys 

tempF= [63, 73, -999, 91, 86, 82, 72, 81, 66, 77, 75, 104, -999, 84, 77, 66, 82, 63, 93, 72, 82, 64, 75 , 90, 64, -999, 99, 82, 95, 2]
tempC= []
indx= 0

   

def changeTemp(idx):
    
    for idx in range(0, len(tempF)):
        tempC.append(round((5*(tempF[idx]-32)/9), 2))

def averageCelsius(num):
    for num in range(0, len(tempC)):
        num= sum(tempC)/len(tempC)
    
    print("The average of the celsius temperatures is: ", num )


if __name__ == "__main__":
    print(tempF,"\n")
    tempF.pop(2)
    tempF.pop(11)
    tempF.pop(23)

    changeTemp(indx)
    print("FIRST WE RREMOVE THE NON RELEVANT DATA\n")
    print("The new list is: \n", tempF)
    print("The temperatures in celsius are: \n", tempC )
    print("The maximum value of the Celsius temperatures is:", max(tempC))
    averageCelsius(tempC)

 

