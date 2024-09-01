// THIS POINTER :

/*
-  this is a specicial pointer in C++ that points to the current object.

- this->prop is same as *(this).prop
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
// -----  parametrised constructors  ----- //
 Teacher(string name, string dept, string subject, double salary){
    this->name = name;
    this->dept = dept;
    this->subject = subject;
    this->salary = salary;
//(left ones are property name of objects ) this->name
//(right ones are parameters name of teacher) = name
// its confusing so use this for better understanding
 
 }
 
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

    void getInfo(){
        cout << "name:" << name << endl;
        cout << "subject:" << subject << endl;
        cout << "dept:" << dept << endl;
        cout << "salary:" << salary << endl;

    }
};

int main(){
 Teacher t1("aastha", "CS", "c++", 50000);   // constructor call                                
    t1.getInfo();
    return 0;
}
 