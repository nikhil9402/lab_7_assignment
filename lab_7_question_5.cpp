#include <iostream>
using namespace std;

class ZooAnimal {
 
  private:
  char* name;
  int cageNumber;
  int weightDate;
  int weight;
  

  public:
  void Create(char*,int,int,int);
  void Destroy();
  char* reptName();
  int daysSinceLastWeighed(int today);
  void printZooAnimal();
};

 void ZooAnimal::Create(char* n,int c, int wd, int w){
 
  name = n; 
  cageNumber = c;
  weightDate = wd;
  weight = w;
  
  }
 void ZooAnimal::Destroy(){
  delete [] name;
}
 
 char* ZooAnimal::reptName() { 
  return name;
}
 
 int ZooAnimal::daysSinceLastWeighed(int today){

 int thisday,startday;
 
 thisday = today/100*30 + today - today/100*100;
 startday = weightDate/100*30 + weightDate - weightDate/100*100;
 
 if (thisday < startday){
   thisday += 360;
   return (thisday-startday);
  }
  
 if (today < weightDate){
   today += 360;
   return (today-weightDate);
  }
}

void ZooAnimal::printZooAnimal(){
   cout << "Its cage number = " << cageNumber << endl;
   cout << "Its weight date = " << weightDate << endl;
   cout << "Its weight = " << weight << endl;
}


int main(){
 ZooAnimal bozo;
 char name[5] = "Bozo";
 bozo.Create(name,408,1027,400);
 cout << "This animal's name is " <<  bozo.reptName() << endl;
 bozo.printZooAnimal();
 cout << "Number of days since last weighed = " << bozo.daysSinceLastWeighed(4000) << endl;
return 0;
}
  
