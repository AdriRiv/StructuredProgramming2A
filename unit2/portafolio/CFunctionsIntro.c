
#include <stdio.h>
#include <stdlib.h> //atoi, atof, sprintf
#include <string.h> //strcpy
#include "./myFunctions.h"
//#include "./FolderTest/myFunctions.h"

int mynumber= 3;
char mystring[255]= "Hello World";

//Declare and define (FirstMethod) Siempre tiene que retornar algo: void, int, str, float
//void sayHello(char message[]){
 //   printf("%s\n", message);
//}

//Secong method:   1.Declare
void saymyName(char message[]);


int main(){

    sayHello("Hello World");

    saymyName("Adri");

    int MyResu= addTwoNumbers(4,6);
    printf("The result is: %d \n", MyResu);

    printf("%d", libnum);
    return 0;
}

