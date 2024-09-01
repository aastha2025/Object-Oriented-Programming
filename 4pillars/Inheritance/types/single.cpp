/*


1)  Single Inheritance

   parent    person
     |         |
     |         |
    \_/       \_/
   child     student

*/


#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;
   
};

class Student : public Person { // inherit person class properties in public form into our student class.

public:
    int rollNo;
};

int main() {
    // Create a Student object with all necessary parameters
    Student s1;
    s1.name = "aastha";
    s1.rollNo = 123;

cout << "name:" <<s1.name << endl;
cout << "rollNo:" << s1.rollNo << endl;
 return 0;
}
