#include <iostream>
using namespace std;


//int glob = 10;

class printData {

   //extern int glob = 11;
   public:
      void print(int i) {
        cout << "Printing int: " << i << endl;
      }
//      void print(int i, int j) {
//        i = i+1;
//        cout << "Printing int: " << j << endl;
//      }
      void print(double  f) {
        cout << "Printing float: " << f << endl;
      }
      void print(char* c) {
        cout << "Printing character: " << c << endl;
      }
};

int main(void) {

   //std::cout << glob << std::endl;
   printData pd;
   //std::cout << glob << std::endl;

   int i = 5;
   std::cout << i << std::endl;
   // Call print to print integer
   //pd.print(i,7);
   std::cout << i << std::endl;

   // Call print to print float
   pd.print(500.263);

   // Call print to print character
   //pd.print("Hello C++");

   return 0;
}


