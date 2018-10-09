#include <iostream> 
#include <string>
using namespace std;
 
class Shape {
   protected:
      int width, height;
      
   public:
      Shape( int a = 0, int b = 0){
         width = a;
         height = b;
      }

      /*
       * function that has some parent class definition
       * but "can" have a different behaviour if the definition is changed
       * in the derived classes. In this case the the binding is a "early binding"
       * hence if the objects are not created in the correct manner the behaviour might differ
      */
      int area() {
         cout << "Parent class area " <<endl;
         return 0;
      }

      /*
       * virtual function that has some parent class definition
       * but "can" have a different behaviour if the definition is changed
       * in the derived classes
       * otherwise parents definition is used
       * also, this is "late binding"
      */
      virtual int longerAttribute(){
          if (width < height){
              cout << "longerAttribute Shape class longerAttribute " <<  height <<endl;
              return height;
          }
          else{
              cout << "longerAttribute Shape class longerAttribute " <<  width <<endl;
              return width;
          }
      }

      /*
       * pure virtual function, that needs to be specified by the
       * derived classes, otherwise there will be compilation errors
      */
      virtual std::string shapeName() = 0;

};

class Rectangle: public Shape {
   public:
      Rectangle( int a = 0, int b = 0):Shape(a, b) { }
      
      int area () { 
         cout << "Rectangle class area : " << (width * height) <<endl;
         return (width * height); 
      }

      int longerAttribute(){
          if (width < height){
              cout << "Rectangle class longerAttribute "<< height <<endl;
              return height;
          }
          else{
              cout << "Rectangle class longerAttribute "<< width <<endl;
              return width;
          }
      }

      std::string shapeName(){
          return "Rectangle";
      }
};

class Triangle: public Shape {
   public:
      Triangle( int a = 0, int b = 0):Shape(a, b) { }
      
      int area () { 
         cout << "Triangle class area : " << (width * height / 2) <<endl;
         return (width * height / 2); 
      }

      std::string shapeName(){
          return "Triangle";
      }
};

// Main function for the program
int main() {
   Shape *shape;
   Rectangle rec(10,7);
   Triangle  tri(3,5);

   // store the address of Rectangle
   std::cout << "*********** For Rectangle*********" << std::endl;
   shape = &rec;
   
   // call rectangle area.
   shape->area();
   rec.area();

   shape->longerAttribute();
   rec.longerAttribute();

   std::cout << "Shape: " << shape->shapeName() << std::endl;
   std::cout << "Rect: " << rec.shapeName() << std::endl;

   // store the address of Triangle
   std::cout << "*********** For Triangle*********" << std::endl;
   shape = &tri;
   
   // call triangle area.
   shape->area();
   tri.area();

   shape->longerAttribute();
   tri.longerAttribute();

   std::cout << "Shape: " << shape->shapeName() << std::endl;
   std::cout << "Tri: " << tri.shapeName() << std::endl;
   
   return 0;
}
