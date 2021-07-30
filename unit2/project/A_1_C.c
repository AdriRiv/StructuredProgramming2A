
#include <stdio.h>
#include <stdlib.h>

int num1=0;
float avrg=0;


int main(int argc, char* argv[]){

    for(int idx=1; idx< argc; idx++){
        num1= atof(argv[idx]);
        
        avrg=num1+avrg;

    }
    avrg= avrg/(argc-1);

    
    printf("We are calculating the average... \n");
    printf("The average is: %f\n", avrg);
    


    return 0;
}

