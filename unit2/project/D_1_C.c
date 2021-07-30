
#include <stdio.h>
#include <stdlib.h>

int day=0;

int main(){

    for(int month=1; month <= 12 ; month++){
        printf("Month: %d\n", month);
        if(month == 2){
            for(int day=1; day<=28; day++){
                printf("Day: %d\n", day);
            };
        }
        if(month== 1 | month== 3 | month== 5 | month == 7 | month== 8 | month==10 | month==12 ){
            for(int day2=1; day2<=31; day2++){
                printf("Day: %d\n", day2);
            };
        }
        if(month==4 | month==6 | month== 9 | month== 11){
            for(int day3=1; day3<=30; day3++){
                printf("Day: %d\n", day3);
            };
        }      
    }

    return 0;
    
}