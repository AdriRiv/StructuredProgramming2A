#include <stdio.h>
#include <stdlib.h>

int age= 0;
char name;

int main(){
    
    printf("Enter your name, please\n");
    scanf("%s", &name);

    printf("How old are you?\n");
    scanf("%i", &age);

    if (age<18){
        printf("WARNING!!!! YOU ARE A MINOR, YOU CANNOT KEEP GOING\n");
    } else{

        printf("Welcome to our page\n");
    }
    return 0;
}