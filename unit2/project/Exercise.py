
import sys

def SeparatePhrase(phrase):
    
    inverse= ' '.join(reversed(phrase.split(' ')))

    print("The inversed phrase is: \n",inverse)


if __name__ == "__main__":
    mystr= str(input("Please enter a phrase: "))
    SeparatePhrase(mystr)
 

 

