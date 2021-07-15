#include <stdio.h>
#include <string.h>
#include <stdio.h> 

#include "./myFunctions.h"

//Array (Arreglos) estructuras

int myIntArray[5];

typedef struct wizard{
    int health;
    int stamina;
    char* name;
    //more atributes
}Wizard;   //Lleva ; al final 
// typedef struct wizard Wizard;


int main(){

    struct wizard Adri= {100, 100, "Adriana Rivera"};
    Wizard chris = {50, 70, "Christian "};
    printf("%s\n", Adri.name);

    fillArray(myIntArray, 5);
    printArray1D(myIntArray, 5);
    printf("%d", myIntArray[0]);
    printf("%d", myIntArray[1]);
    printf("%d", myIntArray[2]);
    printf("%d", myIntArray[3]);
    printf("%d\n", myIntArray[4]);
    return 0; 
}