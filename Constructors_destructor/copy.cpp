/*
COPY CONSTRUCTOR

Special constructor (default) used ot copy properties of one object into another.
 
 
      t1               (copy)        t2
--------------------        --------------------
| name = "shradha" |        | name = "shradha" |
| subject = "c++"  |        | subject = "c++"  |
| dept = "cs"      |        | dept = "cs"      | 
| salary = 50k     |        | salary = 50k     |
--------------------        --------------------


There are 2 type of copies in c++
 -  SHALLOW COPY
 - DEEP COPY

 ** A shallow copy of an object copies all of the member values from one object to another.
     ---------------

 ** A deep copy, on the other hand, not only copies the member values but also makes copies of any dynamically allocated memory  that the members point to.
     ------------
     
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
 }
// copy constructor
 Teacher(Teacher &orgObj){//pass by reference
 cout << "I am custom copy constructor"<<endl;
     this->name = orgObj.name;
    this->dept = orgObj.dept;
    this->subject = orgObj.subject;
    this->salary = orgObj.salary;
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
  //  t1.getInfo();
    Teacher t2(t1); // default copt constructor.
    t2.getInfo();
    return 0;
}
 