#include <iostream>
#include <enumexp.h>

//using namespace EumExperiment;

//extern int hey;
int hey;

void  EumExperiment::displayTheEnum(){
        std::cout << "the enum for red is: " << expColor0 << std::endl;
        std::cout << "the enum is blue is: " << expColor1 << std::endl;
        std::cout << "the enum is green is:" << expColor2 << std::endl;

        std::cout << "here we are setting the extern variable" << std::endl;

        hey = 24;
    }

void EumExperiment::calculateEnumVal(int _val){
    switch(_val) {
        case red:   std::cout << "red\n"; break;
        case green: std::cout << "green\n"; break;
        case blue:  std::cout << "blue\n"; break;
        default: std::cout << "no color\n"; break;
    }
}
