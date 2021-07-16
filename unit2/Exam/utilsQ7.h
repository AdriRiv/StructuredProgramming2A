#include <stdio.h>
#include <stdlib.h>

typedef struct ROBOT{
    char* name;
    char* type;
    float height;
    float weight;
    int degreesOfFreedom;
    void (*sayHelloToRobot)(struct ROBOT);
}ROBOT;


void sayHelloToRobot(ROBOT name){

    printf("Hewo, little %s\n", name.name);
}