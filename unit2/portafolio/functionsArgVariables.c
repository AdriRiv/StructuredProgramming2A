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

    return 0;
}