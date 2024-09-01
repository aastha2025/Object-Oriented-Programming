
// ACCESS MODIFIERS::

/*
- private(by deafault): Data & methods accessibke inside class
- public: Data & methods accessible to everyone.
- protected: Data & methods accessible inside class & to its derived class.



*/


#include <iostream>
#include<string>
using namespace std;


class Teacher{
private:
  double salary;
public:
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
   Teacher t1;                                 
    t1.name = "Aastha";
    t1.subject = "C++";
    t1.dept = "CS";
    t1.setSalary(50000);

    cout<<t1.name<<endl;
    cout << t1.getSalary() <<endl;
    return 0;
}
