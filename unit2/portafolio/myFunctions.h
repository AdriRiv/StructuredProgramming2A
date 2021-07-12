#include <stdio.h>
#include <stdlib.h> //atoi, atof, sprintf
#include <string.h> //strcpy

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

//Paso de argumentos por dirección
void modifyVariables( int arg1, int arg2){
    arg1= arg1*2;
    arg2= arg2*2;
    return;
}



