#include <iostream>
using namespace std;

class rect{
public:
double l;
double b;

double Area(void);
double Perimeter(void);
};



double rect::Area(void){
  return l*b;
}

double rect::Perimeter(void){
  return 2*(l+b);
}

int main (){

rect rect1;
rect rect2;
double Area = 0.0;
double Perimeter = 0.0;

rect1.l = 4.0;
rect1.b = 5.0;

rect2.l = 3.0;
rect2.b = 6.0;

Area = rect1.Area();
Perimeter = rect1.Perimeter();

cout << "Area of rectangle 1 = " << Area << endl;
cout << "Perimeter of rectangle 1 = " << Perimeter << endl;

Area = rect2.Area();
Perimeter = rect2.Perimeter();

cout << "Area of rectangle 2 = " << Area << endl;
cout << "Perimeter of rectangle 2 = " << Perimeter << endl;

return 0;
}
