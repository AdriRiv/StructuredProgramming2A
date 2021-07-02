#include <stdio.h>
#include <stdlib.h> // atoi, atof, size_t
#include <stdbool.h> // break (creo)

#define TAM 10 //sin ; y =

int lista[TAM]= {11,12,13,14,15,16,17,18,19,20};
int idx=0;

//typedef int INTEGER;



int main(int argc, char** argv){
    
    for( int index=0; index < TAM; index++){
        printf("Index: %d, Value: %d \n\a", index, lista[index]);
        for(size_t i=0;i<3; i++){
            printf("Hola Mundo\n");
        }
    }

    printf("Idx found: %d\n", idx);

    return 0;
}
