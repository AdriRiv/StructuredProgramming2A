#include <stdio.h>
#include <stdlib.h> //atoi, atof, sprintf
#include <string.h> //strcpy

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

