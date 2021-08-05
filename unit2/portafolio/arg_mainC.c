#include <stdio.h>
#include <stdlib.h> //atoi atof//
#include <string.h> // strcpr 

int my_int = 0; // %i p d
float my_float = 3.1416; // %f
char my_char = 'c'; // %c
char my_str[10] = "hola";  //%s
float sec_float= 0.0;


int main(int argc, char** argv){
    
    //-----Pointer------ 
    int* my_ptr_int = &my_int;   // %p
    //

    strcpy( my_str, argv[1]);
    int num = atoi(my_str);

    printf("my int: %i, my float :  %f, my char: %c, my string: %s, my pointer int: %p \n", my_int, my_float, my_char, my_str, my_ptr_int);
    printf("argc: %d  element 1: %i, emelent 2: %s, char: %c \n", argc, num*3, argv[2], 'W' );

    return 0;
}
