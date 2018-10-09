#include <iostream>
#include <scopeExample.h>

/*
 * Either the extern declaration should be in the file where
 * variable needs to be used
 * or the declaration should be in one of the header files imported
 * Thus for simplicity one can just declare a list of extern variables
 * load that .h file whereever any external variable needs to be used
 *
 * Note: Either use the declartion below or use the declartion in scopeExample.h
 * by uncommenting the line
 */
extern int extern_var_a;

int main(){
    /*
     *  static function usage: no object needs to be created
     * can be called directly on the class name
     */
    ScopeExample::displayStars();
//    ScopeExample::var_static = 10;

/*    std::cout << "extern_a in main is: " << extern_var_a << std::endl;
    ScopeExample sx(1);
//    std::cout << "static_var of class: sx" << sx.staticGetter() << std::endl;
    ScopeExample sy(2);
//    std::cout << "static_var of class: sy"  << sx.staticGetter() << std::endl;
//    std::cout << "static_var of class: sx"  << sx.staticGetter() << std::endl*/;


//    sx.initializeFunc();
//    sx.printValues();
//    std::cout << "extern_a in main is: " << extern_var_a << std::endl;
//    // below line will throw an error
//    // std::cout << "extern_a in main is: " << global_file_var << std::endl;
//    /*
//     *  static global variables can be accessed wherever they have been imported
//    */
//    std::cout << "extern_a in main is: " << global_file_header << std::endl;

//    // call the extern function funcfoo declared in scopeExample.h and defined in
//    // scopeExample.cpp file
//    funcfoo();

    }
