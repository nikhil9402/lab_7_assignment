#include <iostream>
using namespace std;

class Box {
public:
double length;
double breadth;
double height;

double getVolume(void);
void setlength (double length);
void setbreadth (double breadth);
void setheight(double height);

};

double Box::getVolume(void){
       return length * breadth * height;
}

void Box::setlength (double len){
       length = len;
}

void Box::setbreadth (double bre){
       breadth = bre;
}

void Box::setheight(double hei){
       height = hei;
}





int main () {
 
Box box1;
Box box2;
double volume = 0.0;

box1.setlength(4.0);
box1.setbreadth(5.0);
box1.setheight(6.0);

box2.setlength(4.0);
box2.setbreadth(8.0);
box2.setheight(7.0);

volume = box1.getVolume();
cout << "Volume of box1 = " << volume << endl;

volume = box2.getVolume();
cout << "Volume of box2 = " << volume << endl;

return 0;
}
