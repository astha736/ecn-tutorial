#include <iostream>
#include <hello.h>


Hello::Hello(std::string _name, int _age){
//Hello(std::string _name, int _age){
	name = _name;
	age = _age;
	}

// private function
void Hello::displayAge(){
//void displayAge(){
	std::cout << "private function: name: " << name << std::endl;
	std::cout << "private function: some: " << age << std::endl;
}


// public function
void Hello::displayMsg(){
//    void displayMsg(){
	std::cout << "public function: age is: " << name << std::endl;
	std::cout << "public function: some: " << name << std::endl;
	displayAge();
}

