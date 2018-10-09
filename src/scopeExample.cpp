#include<iostream>
#include<scopeExample.h>





/*
 * There should be some declaration provided in the file
 * or imported from a .h file
 * otherwise you will get a warning
 * Warning: no previous declarartion for non static variable extern_var_a given
 * by the qtcreator
 */
extern int extern_var_a;

// only global for this file, cannot be accessed anywhere else
int global_file_var = 10;

/*
 * The extern variable should be somewhere declared as a "global variable"
 * and value is assigned to it somewhere!
 */
int extern_var_a;
// int extern_var_a = 8;  // will assign value 8 at the beginning of processing(not initialization) of the class

ScopeExample::ScopeExample(int _a){
    // static_const_var = _a; // not allowd because of the const property
//    var_static = _a;
    // const_var = _a; // not allowd because of the const property (no modification to a const variable is allowed)
}

void ScopeExample::initializeFunc(){
    extern_var_a = 10;
    class_var_a = 15;
    global_file_var = 2;
}

void ScopeExample::printValues(){
    std::cout << "ScopeExample class_var_a : " << class_var_a << std::endl;
    std::cout << "ScopeExample extern_a : " << extern_var_a << std::endl;
    std::cout << "ScopeExample global_file_var : " << global_file_var << std::endl;
}

void ScopeExample::displayStars(){
    std::cout << "**************" << std::endl;
}

//int ScopeExample::staticGetter()
//{
//    return var_static;
//}

//void ScopeExample::staticSetter(int _a)
//{
//    var_static = _a;
//}

// definition of the external function here
// notice that the scope is not of the ScopeExample class here
void funcfoo(){
    std::cout << "foofoofoofoo" << std::endl;
}
