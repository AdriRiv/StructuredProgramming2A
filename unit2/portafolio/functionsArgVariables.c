#include <stdio.h>
#include "./myFunctions.h"
#include <stdlib.h>

int var1= 10;
int var2= 20;

int main(int argc, char** argv){
    //printf("Variable 1: %d, Variable 2: $d\n", var1, var2 );
    

    printf("Variable 1= %d, Variable 2= %d \n", var1, var2);
    printf("---Program Executed---\n");

    //Paso de argumentos por direcicón
    modifyVariables(var2, var2);

    printf("New Varible 1: %d, New Variable 2: %d\n", var1, var2);


    printf("------------------------Using Pointers------------------------\n");
    //Get the Adress of var1 and var2
    //&= La dirección de 
    int* myptr= &var1;
    int* myptr2= &var2;
    printf("Adress Variable1: %p, \t Adress Variable2: %p\n", myptr, myptr2);

    modifyVariablesAdress(&var1, &var2, 3);
    // *myptr= El valor de la dirección= a algo
    printf("Function completed:\n");
    
    printf("New Variable1: %d, New Variable2: %d\n", var1, var2);
    return 0;
}