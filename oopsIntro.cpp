/*
CLASSES AND OBJECTS 

--->>   Objects are ENTITIES in the real world.
--->>   Class is like a BLUEPRINT of these entities.

ex1-  Toyota make a blue print and with help of that can make n no. of cars.
            -----(class)-------                        ------(objects)---------


ex2-  Design a system having teacher infos 
teacher----
       |- name 
       |- dept
       |- subject
       |- salary(all above called properties)
       |
       |- change dept(function)(called methods)
       |


     -  Object has some properties and methods.
     -  properties are  associated with any entity(object).
     -  method is function which is written inside our class.


ex3-   create class(BP)
         |
       (make)
        obj1 T1 
        obj2 T2 


SYNTAX-----

class Teacher {
   properties;
   methods;
};
*/

// by default class created as a private class:
//by writing public we have to make it public class so can be accessable anywhere.

#include <iostream>
#include<string>
using namespace std;


class Teacher{
//private bydefault
// make it public
public:

// properties
  string name;
  string dept;
  string subject;
  double salary;

//methods (also called member function bcz these functions are the members of the class.)
   void changeDept(string newDept){
        dept = newDept;
   }

};
int main(){
//classname objectname; for creating object
   Teacher t1; // constructor call
//agr object ko class se properties acces krna h to dot operator use krte h 
//                                              ----------------
    t1.name = "Aastha";
    t1.subject = "C++";
    t1.dept = "CS";
    t1.salary = 50000;

    cout << t1.name <<endl;
    return 0;
}
