#include <iostream>
#include <hello.h>
#include <enumexp.h>
#include <vector>

//extern int hey;

//int hey;

int main(){
//    int a = 10;
//    int b[] = {1,2,3,4};
//    std::vector<int> vec(b,b + sizeof (b)/ sizeof (int));
//    std::cout<< vec[1] << std::endl;

//    for(auto &x: vec){
//        x = 10.1;
//        std::cout<< x << std::endl;
//    }

//    for(auto const &x: vec){
//        std::cout<< x << std::endl;
//        //x = 7;

//    vec = a + b;

//    int k;
//    std::cout << k << std::endl;

    //std::vector b = [1,2,3,4];

//         //create a object and initialize it with the string "Astha"
	
//        Hello hello("Astha",24);
//        hello.displayMsg();
//        std::cout << hello.age << std::endl;
//         /*
//          * hello.displayAge(); -> cannot be called as it is private method
//          * std::cout << hello.name << std::endl; -> cannot be called as it is private variable
//          * return 0 when there is no error
//          */


        //  ENUM
        EumExperiment enumExp;
        enumExp.displayTheEnum();
        enumExp.calculateEnumVal(0);
        enumExp.calculateEnumVal(1);
        enumExp.calculateEnumVal(2);
        enumExp.calculateEnumVal(3);

        //extern int hey;
        //std::cout << "extern hello is :" << hey << std::endl;

        return 0;
}

//class Dummy {
//	public:
//		int i;
//		//int k;
//		static int j;
//		Dummy () {
//			//k = j+1;
//			i = j ++;
//			std :: cout << i << " yoyo " << j << std :: endl ;
//			j += j;
//			std :: cout << i << " yoyo " << j << std :: endl ;
//		}
//};
//int Dummy::j = 0;


//int main () {
//	Dummy a , b;
//	//a.j = 0;
//	//b.j = 0;
//	if(a.j == b.j )
//	std :: cout << b.i << " " << a .j << std :: endl ;
//	else
//	std :: cout << " Should I ever print this ?" << std :: endl ;
//}
