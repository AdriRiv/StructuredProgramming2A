
#include <iostream>
#include <tuple>
std:: string mystr= "Hello World"; //::= está contenido en esa biblioteca
int mynumber= 3;
float myFlt= 3.141;

std::tuple<int,int> myTuple= {1, 2};

//Second Method
void sayHello(std::string tag1);


int main(){
    sayHello(mystr );
    return EXIT_SUCCESS;
}

void sayHello(std::string tag1){
    std::cout<<tag1<<std::endl;
}
