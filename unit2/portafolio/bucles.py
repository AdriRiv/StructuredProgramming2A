
from sys import argv

mlist = ["Red", "Blue", "Black"]


if __name__ == "__main__":
    print (f'programName: {argv[0]}\n')
    print (mlist, len(mlist)) #Size of the list 

    index = 0
    while (index<len(mlist) ):
        print ( f'index= {index}, value= {mlist[index]}')
        index = index +1
    for index in range(0, len(mlist)):
        print ( f'index= {index}, value= {mlist[index]}')
