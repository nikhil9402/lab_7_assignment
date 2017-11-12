#include <iostream>
using namespace std;

class Point{

private:
 int X,Y;
 
public:
Point();

Point(int xval, int yval);

void Print(void);

void Move(int dx,int dy);

int Get_X () const;
int Get_Y () const;
void Set_X (int xval);
void Set_Y (int yval);


};


Point::Point(){
   X=0;
   Y=0;
}

Point::Point(int xval, int yval){
   X=xval;
   Y=yval;
}

void Point::Move(int dx,int dy){
   X+=dx;
   Y+=dy;
}

int Point::Get_X () const {
return X;
}

int Point::Get_Y () const {
return Y;
}

void Point::Set_X (int xval) {
   X=xval;
}

void Point::Set_Y (int yval) {
   Y=yval;
}

void Point::Print(void){
   cout <<  "(" << X << "," << Y << ")" << endl;
}


class Rectangle{
 private:
 Point bL,bR,tL,tR;
 //bL means bottom Left and so on
 
 int Side1(void);
 int Side2(void);
 
 public:
  Rectangle ();
  Rectangle (Point bL, Point tR);
  void printPoints(void);
  void Area(void);
}; 

Rectangle::Rectangle(){
  bL.Set_X(0);
  bL.Set_Y(0);

  bR.Set_X(1);
  bR.Set_Y(0);

  tR.Set_X(0);
  tR.Set_Y(1);

  tL.Set_X(1);
  tL.Set_Y(1);
}

Rectangle::Rectangle (Point botL, Point topR){

bL = botL;
tR = topR;

bR.Set_X(tR.Get_X());
bR.Set_Y(bL.Get_Y());

tL.Set_X(bL.Get_X());
tL.Set_Y(tR.Get_Y());

}

void Rectangle::printPoints(void){
cout << "Rectangle from your entered data is : \n";
bL.Print();
bR.Print();
tR.Print();
tL.Print();
}

int Rectangle::Side1(void){
  int l1 = bR.Get_X() - bL.Get_X();
  return l1;
}

int Rectangle::Side2(void){
  int l2 = tL.Get_Y() - bL.Get_Y();
  return l2;
}

void Rectangle::Area(void){
  int l1 = Side1();
  int l2 = Side2();
  int A = l1*l2;
  cout << "Area of the rectangle = " << A << endl;
}  


int main(){ 

Point p1,p2,p3,p4;

int x,y;

p1.Set_X (2);
p1.Set_Y (3);
 
cout << "p1 is at " << "(" << p1.Get_X() << "," << p1.Get_Y() << ")" << endl;

p1.Print();
p2.Print();

cout << "Enter x and y coordinates, respectively, of the bottom left point : \n";
cin >> x >> y ;
Point botL(x,y);

cout << "Enter x and y coordinates, respectively, of the top right point : \n";
cin >> x >> y ;
Point topR(x,y);

Rectangle r1(botL,topR);
r1.printPoints();
r1.Area();

return 0;
}

