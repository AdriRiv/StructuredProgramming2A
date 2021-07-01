#include <stdio.h>
#include <stdlib.h> // atoi, atof
#include <stdbool.h> // break (creo)

#define TAM 10 //sin ; y =

int lista[TAM]= {11,12,13,14,15,16,17,18,19,20};
int idx=0;

int main(int argc, char** argv){
    
    for( int index=1; index <= TAM; index++){
        printf("Index: %d, Value: %d \n\a", index, lista[index]);
    }

   // while (lista[idx] != 17){
     //   idx++;
    //}

    while(true){
        if(lista[idx] == 17){
            break;
        }
        idx++;
    }
    printf("Idx found: %d\n", idx);

    return 0;
}
