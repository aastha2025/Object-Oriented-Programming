/*

2) Multi-level Inheritance

    parent    person(name , age)
     |         |
     |         |
    \_/       \_/
   parent   student(rollNo)
     |         |
     |         |
    \_/       \_/
   child    graduateStudent(researchArea)
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

class gradStudent :public Student{
    public:
        string researchArea;
};


int main() {
    // Create a Student object with all necessary parameters
    gradStudent s1;
     s1.name = "aastha";
     s1.researchArea = "physics";

     cout << "name:" << s1.name << endl;
     cout << "researchArea:" << s1.researchArea <<endl;
    
    return 0;
}
