#include <iostream>
 
using namespace std;

// Base class Shape
class Shape {
   public:
      void setWidth(int w) {
         width = w;
      }
      void setHeight(int h) {
         height = h;
      }
      int getArea() {
         return (width * height); 
      }
      
   private:
      int width;
      int height;
};

// Base class PaintCost
class PaintCost {
   public:
      int getCost(int area) {
         return area * 70;
      }
};

// Derived class
class Rectangle: public Shape, public PaintCost {
   public:
	int area;
//   public:
//      Rectangle(int _width, int _height){
//      this->setWidth(_width);
//      this->setHeight(_height);
//      //width = _width;
//      //height = _height;
//      area = this->getArea();
//      }
};

int main(void) {
   Rectangle Rect;
   //int area;
   
   Rect.setWidth(5);
   Rect.setHeight(7);

   //area = Rect.getArea();
   
   // Print the area of the object.
   cout << "Total area: " << Rect.getArea() << endl;

   // Print the total cost of painting
   //int area2 = 100;
   //cout << "Total paint cost: $" << Rect.getCost(area) << endl;
   //cout << "Total paint cost: $" << Rect.getCost(area2) << endl;

   return 0;
}
