/*


3) Multiple Inheritance
  
    parent          parent      student             teacher
     \               /        (rollNo , name)     (subject, salary)  
      \             /                   \              /
       \           /                     \            /
        \         /                       \          /     
           child                               TA
                                     (having properties of both)

*/


#include <iostream>
#include <string>
using namespace std;


class Student{
    public:
      string name;
      int rollNo;
};

class Teacher {
    public:
    string subject;
    double salary;
};

class TA : public Student, public Teacher{

};

int main(){
    TA t1;
    t1.name = "aastha";
    t1.subject = "oops";
    
    cout << " name :" << t1.name <<endl;
    cout << "subject: " << t1.subject << endl;

    return 0;
}