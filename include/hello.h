#ifndef HELLO_H
#define HELLO_H
// above is the way to say this is a header file for "hello" class
#include <string>


class Hello{
	private: 
		std::string name;
		void displayAge();

	public:
		int age;
		
		Hello(std::string _name, int _age); 
		// specify that you will give a definition of the 
		// constructor instead of using the default one from cppm which is implicitly defined
		
		void displayMsg();
		
}; // dont forget to add ";" after the class definition 
#endif // HELLO_H
