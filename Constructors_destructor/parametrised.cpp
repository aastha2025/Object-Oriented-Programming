// PARAMETRISED CONSTRUCTOR

#include <iostream>
#include<string>
using namespace std;


class Teacher{
private:
  double salary;
  
public:

// -----  parametrised constructors  ----- //
 Teacher(string n, string d, string s, double sal){
    name = n;
    dept = d;
    subject = s;
    salary = sal;

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
 