/*
Hiding all unnecessary details & showing only the important parts.
       ----------(sensitive info)----------------
one of the way is :
- Use of access modifier we can implement abstractions.


- use of access modifier/specifiers in any code means we are implementing abstraction .

**DIFFERENCE B?W DATA HIDING AND ABSTRACTION**

- in data hiding : hiding of data is done only.
- in abstraction along with hiding of data , showing of important data is done as well.

SYNTAX:
 abstract class{
    properties;
    methods;
 };


Using Abstract Classes:
--------PROPERTIES OF ABSTRACT CLASSES-----------
- Abstract Classes are used to provide a base class from which other classes can be derived.
- they cannot be instantiated(object) and are meant to be inherited.
- Abstract classes are typlically used to define an interface for derived classes.


**NOTE**
- Abstract class only be created for inheritance.
- it has no object.
- it only tells which properties , functions be present in other classes.
- abstract class is like a blue print for other classes which are implemented.


*/

#include <iostream>
#include<string>
using namespace std;

 class Shape{ // abstract class

  virtual void draw() = 0; 
 // also called pure virtual function ( use value assign is 0 and use of virtual keyword done).
// jismai virtual keyword and value declare 0 hota h vo automatically ek abstract class bnjati h.
// means shape class ki jitni bhi child class impleme nt hongi inmai submai deaw name ka function implenet hona chhiye jiski value hogi 0.

};

class Circle : public Shape{
     public:
     void draw(){
        cout << " drawing a circle" << endl;
     }
};

int main(){
  Circle c1;
  c1.draw();
    return 0;
}

