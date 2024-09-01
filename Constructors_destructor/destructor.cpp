/* DSTRUCTOR (opposite of constructor)

- deallocation of memory is done by destructor.
- can make automatically also .
- if in object memory is created dynamically then deleted dynamically also .
- in c++ if use new keyword for creating memory dynamically then use delete keyword for deallocation.
- if not deleted dynamically allocated memory  then issues occur like:--- memory leak
                                                                       -----------------
                                                           


SYNTAX: 

~className(){}

*/

#include <iostream>
#include<string>
using namespace std;

class Student{
 public:
   string name; // static
   double* cgpaPtr; // dynamically

   Student(string name , double cgpa){
    this->name = name; // static
    cgpaPtr = new double; // dynamically allocated
    *cgpaPtr = cgpa;
   }
//destructor
   ~Student(){
   cout <<"Hi I delete everything"<<endl; // free  statically allocated memory.
   delete cgpaPtr; // free dynamically allocated memory.
   }

   void getInfo(){
    cout <<"name :" << name <<endl;
    cout << "cgpa: " << *cgpaPtr <<endl;
   }
};

int main(){
 Student s1("aastha", 9.0);
 s1.getInfo();

    return 0;
}