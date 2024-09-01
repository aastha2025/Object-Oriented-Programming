/*
Constructor:
Special method invoked automatically at time of OBJECT CREATION. Used for initialisation of objects.
                                            --------------------

- Same name as class.
- Constructor doesn't have a return type.
- Only called once (automatically), at object creation.
- Memory allocation happens when constructor is called.
- Constructor will always be declared as public.


There are 3 types of Constructors:
  |
  |-- non-parametrised constructors
  |-- parametrised constructors
  |-- copy constructors
  |


**NOTE**
// ek class mai different constructor same name ke hoskte h but unke parameters different hone chiye .
// called constructor overloading : example of polymorphism. 


*/


#include <iostream>
#include<string>
using namespace std;


class Teacher{
private:
  double salary;
  
public:
// user defined constructor

// -----  non-parametrised constructors ------ //
 Teacher(){
    cout << "hi I am constructor" << endl;
    dept = "CS";
 }
// properties
  string name;
  string dept;
  string subject;
//methods 
   void changeDept(string newDept){
        dept = newDept;
   }

// setter: private values ko set krna 
  void setSalary(double s){
    salary = s;
  }

// getter : private values ko get krna   
    double getSalary(){
        return salary;
    }
};
int main(){
   Teacher t1;   // constructor call                                
    
    t1.name = "Aastha";
    t1.subject = "C++";
    t1.setSalary(50000);

    cout<<t1.name<<endl;
    cout << t1.dept << endl;
    cout << t1.getSalary() <<endl;
     return 0;
}

