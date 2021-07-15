#include <stdio.h>
#include <string.h>
#include <stdio.h> 

#include "./myFunctions.h"

int myInt = 4;
float myFloat= 3.1416;
int * pointerInt= &myInt;

int main(){
    printf("Address myInt: %p \t myInt= %d \n", &myInt, myInt);
    printf("Address myFloat: %p \t myFloat= %f\n", &myFloat, myFloat);
    printf("Address pointerInt: %p\tpointerInt: %p\n", &pointerInt, pointerInt);
    *pointerInt=6;

    Array* myArray= returnArray();
    printf("%d\n",myArray->adarray[1]);
    
    return 0; 
}