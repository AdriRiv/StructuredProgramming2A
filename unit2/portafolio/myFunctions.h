#include <stdio.h>
#include <stdlib.h> //atoi, atof, sprintf, size_t
#include <string.h> //strcpy


///Structure class
typedef struct Array{
    int* adarray;
}Array;



//////////////////Functions Intro C Class
#define pi 3.1416
int libnum= 15;

void sayHello(char message[]){
    printf("%s\n", message);
}

//Secong method:   1.Declare
// void saymyName(char message[]);
void saymyName(char message[]){
    printf("%s\n", message);
}

int addTwoNumbers(int arg1, int arg2){ //declarando
    int result= arg1 +arg2;
    return result;
}

//////////////////////// Functions with arguments Class

//Paso de argumentos por valor
void modifyVariables( int arg1, int arg2){
    arg1= arg1*2;
    arg2= arg2*2;
    return;
}

//Paso de Argumentos por Dirección
void modifyVariablesAdress(int* ptr1, int*ptr2, int multiplo){
    *ptr1= *ptr1 * multiplo;
    *ptr2= *ptr2 * multiplo;
    return;
}

//////Tarea Swap Values //////

void swapValues(int* val1, int* val2){
    int temp;
    temp= *val1;
    *val1= *val2;
    *val2= temp;

}


/////Clase Estructuras
/////// stblib size_t 


void fillArray(int array[], size_t tam){
    for(size_t i=0;i < tam; i++){
        array[i] =i*2;
    }
    return;
}



void printArray1D(int array[], size_t tam){
    for(size_t i=0; i < tam; i++){
        printf("%i\n", array[i]);
    }
    return; 
}


Array* returnArray(){
    Array* anArrayType = (Array*)malloc(sizeof(Array));
    printf("Address anArrayType: %p \t anArrayType= %p\n", &anArrayType, anArrayType),
    anArrayType->adarray[0]= 16;
    anArrayType->adarray[1]= 18;
   
    return anArrayType;
};