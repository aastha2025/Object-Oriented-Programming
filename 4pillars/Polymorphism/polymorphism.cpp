/* POLYMORPHISM(multiple forms)

poly: multiple
morph: forms 

Polymorphism is the ability of objects to take on  DIFFERENT FROMS or behave in different ways DEPENDING ON THE CONTEXT in which they are used.
                                                  -----------------                           ---------------------------
There are 2 types of polymorphism

--1) COMPILE TIME  POLYMORPHISM  // compile time per pta chl jata h kya o/p ayga
 :  statically works

        ex1: Constuctor overloading :::  (name same but parameters different)
        ex2: Function overloading  :::: in one class more than one function having same name are present but having differnet parameters(no. of parameters are differnet or type of parameters are differnet).
        ex3: Operator overloading   ::: one operator used for multiple work.

// ---------------------------

--2) RUN TIME  POLYMORPHISM // ismai run time per pta chlta h kya output ayga.

*/

#include <iostream>
#include<string>
using namespace std;
// compile time polymorphism

// 1)  constructor overloading 
//(name same but parameters different)
/*
class Student{
    public:
      string  name;
   
    Student(){
        cout << "non parametrised constructor" << endl;
    }
    Student(string name){
        this->name = name;
     cout << " parametrised constructor" << endl;

    }
};

int main(){
 Student s1("aastha");
// parametrised constructor call 
// if use Student s1;
// non parametrised constructor call
    return 0;
}
*/

//2) function overloading 
//  in one class more than one function having same name are present but having differnet parameters(no. of parameters are differnet or type of parameters are differnet).
class Print{
public:
   void show(int x){
    cout << "int:" << x << endl;
   }

   void show(char ch){
    cout << "char:" << ch << endl;
   }
 
};

int main(){
  Print p1;
  p1.show(1);
  p1.show('&');
    return 0;
}

//3) Operator overloading
//ex1:
// int y = 10;
// x = y;

//ex2:
// string b = "abc";
// string a = b;