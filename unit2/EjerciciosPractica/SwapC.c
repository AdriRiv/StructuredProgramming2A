#include <stdio.h>
#include <stdlib.h>
#include "/mnt/c/Users/dani2/StructuredProgramming2A/unit2/portafolio/myFunctions.h"

int a= 3;
int b= 5;

int main(int argc, char** argv){
    printf( "The values are:  a= %d\t b=%d\n", a,b);
    printf("Swap values started, swapping values...\n");

    swapValues(&a, &b);

    printf("The new values are: a= %d\t b=%d\n", a, b);

    return 0;
}



