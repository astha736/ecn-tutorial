#include <iostream>

/*
 * This document teached difference between different
 * function passing techniques
 * By Value: modification to the variable being passed is not retained
 * By Reference: modification retained
 * By pointer: modification retained
 */

int change_by_value(int i) { return ++i; }   // compute a new value and return it
void change_via_pointer(int *pi) {++*pi; }   // pass a pointer, deference it and increment it
void change_via_reference(int &ri) {++ri;}  // pass a reference

/****** read only mode ***********/
int pass_by_value(const int i) {
    //return ++i;  // cannot modify the i varibale as it is constant
    return i+1;}   // compute a new value and return new computed value
int pass_via_pointer(const int *pi) {
    //++*pi;            // not allowed
    return *pi + 1;}   // deference the pointer and use the value
int pass_via_reference(const int &ri) {
    //++ri;         // not allowed
    return ri + 1;}  // compute a new value and return new computed value


int main(){
    int i = 0;
    std::cout << "Pass by value: " << std::endl;
    std::cout << i << std::endl;
    change_by_value(i);
    std::cout << i << std::endl;

    std::cout << "Pass by pointer: " << std::endl;
    std::cout << i  << std::endl;
    /* & help to get the address of a variable
     * pointer is nothing but a variable that contains a
     * memory location that it can access
     */
    change_via_pointer(&i);
    std::cout << i  << std::endl;

    std::cout << "Pass by pointer: " << std::endl;
    std::cout << i  << std::endl;
    /* for refernce nothing is required except the right
     * declaration of function, cpp by itself makes the alias
     */
    change_via_reference(i);
    std::cout << i  << std::endl;

    std::cout << "************** Static Variable *******************" << std::endl;
    static int m = 10;

    std::cout << "Pass by value: " << std::endl;
    std::cout << m << std::endl;
    change_by_value(m);
    std::cout << m << std::endl;

    std::cout << "Pass by pointer: " << std::endl;
    std::cout << m  << std::endl;
    /* & help to get the address of a variable
     * pointer is nothing but a variable that contains a
     * memory location that it can access
     */
    change_via_pointer(&m);
    std::cout << m  << std::endl;
    std::cout << "Pass by pointer: " << std::endl;
    std::cout << m  << std::endl;
    /* for refernce nothing is required except the right
     * declaration of function, cpp by itself makes the alias
     */
    change_via_reference(m);
    std::cout << m  << std::endl;



    }
