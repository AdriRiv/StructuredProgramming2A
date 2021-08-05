
#include <stdio.h>
#include <stdlib.h>


int array [5];
int* arrayPtr = NULL;
int* arreglo =NULL;


int main(){
    arrayPtr =  (int*)malloc( 6 * sizeof(int)  );
    arrayPtr[0] =  35;
    arrayPtr[1] =  36;
    arrayPtr[2] =  37;
    arrayPtr[3] =  38;
    arrayPtr[4] =  31;
    arrayPtr[5] =  30;
    for(int index = 0;  index<6;  index++  ){
            printf( "arrayPointer[%d]: '%d'\n  "  , index,   arrayPtr[index] );
    };

    printf( "------------\n  ");
    arreglo = (int*)calloc( 6, sizeof(int)  );
    for(int index = 0;  index<6;  index++  ){
            printf( "arreglo[%d]: '%d'\n  "  , index,   arreglo[index] );
    };

    arrayPtr =  (int*)realloc(arrayPtr, 10*sizeof(int));
    arrayPtr[6] =  29;
    arrayPtr[7] =  28;
    arrayPtr[8] =  25;
    arrayPtr[9] =  24;

    printf( "------------\n  ");
    for(int index = 5;  index<10;  index++  ){
            printf( "arrayPointer[%d]: '%d'\n  "  , index,   arrayPtr[index] );
    };


    free(arrayPtr);

    return 0;
}