#ifndef SCOPEEXAMPLE_H
#define SCOPEEXAMPLE_H

/*
 * no previous declarartion for non static variable extern_var_a given
 * by the qt creator
 */

//extern int extern_var_a;

// global declaration is not allowed here
// int global_file_header = 16;

// static global is allowed
static int global_file_header = 16;

// declaring a extern function here
extern void funcfoo();

class ScopeExample{
int class_var_a; // private by default

public:
    static const int static_const_var = 100;
    static int var_static;
    const int const_var = 50;

//    static int var_static = 190;

    ScopeExample(int _a);
    void initializeFunc();
    void printValues();
    static void displayStars();

    static int staticGetter();

    static void staticSetter(int _a);
};

#endif // HELLO_H
