
#include <stdio.h>

int mynumber= 3;
char mystring[255]= "Hello World";

//Declare and define (FirstMethod) Siempre tiene que retornar algo: void, int, str, float
void sayHello(char message[]){
    printf("%s\n", message);
}

//Secong method:   1.Declare
void saymyName(char message[]);


int main(){

    sayHello("Hello World");
    saymyName("Adri");
    return 0;
}

//2. Define
void saymyName(char message[]){
    printf("%s\n", message);
}