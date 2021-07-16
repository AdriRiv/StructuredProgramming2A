#include <stdio.h>
#include "./utilsQ7.h"


int main(){
    ROBOT Markovit;
    Markovit.name= "Markovit";
    Markovit.type= "Service Robot";
    Markovit.height= 1.2;
    Markovit.weight= 2.5;
    Markovit.degreesOfFreedom= 3;

    Markovit.sayHelloToRobot= sayHelloToRobot;

    ROBOT Tiago;
    Tiago.name= "Tiago";
    Tiago.type= "Service Robot";
    Tiago.height= 1.7;
    Tiago.weight= 2.8;
    Tiago.degreesOfFreedom= 7;

    Tiago.sayHelloToRobot= sayHelloToRobot;

    Tiago.sayHelloToRobot(Tiago);


    return 0;
}