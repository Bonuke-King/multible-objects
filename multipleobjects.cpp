//you can create multiple objects of one class:
#include <iostream>
#include <string.h>
using namespace std;

//create a car class with some attrubutes

class Car {
public :
string brand;
string model;
int year;


};

 int main ()
 {
//creating and object of car
Car carObj;
 carObj.brand ="BMW";
carObj.model= "X5";
 carObj.year =1999;

 //print attribute values

Car carObj1;
 carObj1.brand ="Ford";
carObj1.model= "Mustang";
 carObj1.year =1969;



 cout << carObj.brand << " "<<carObj.model<<" "<<carObj.year<<endl;
 cout << carObj1.brand << " "<<carObj1.model<<" "<<carObj1.year<<endl;





 }













































