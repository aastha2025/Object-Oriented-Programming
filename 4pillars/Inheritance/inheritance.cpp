/* INHERITANCE

- When properties & member functions of BASE class are passed on to the DERIVED class.
                                    --------------                    -----------
                                    

           class A  (parent , base class)
             |
             |
             |
            \ /
             - { B inherits A properties}
           class B ( child , derived class)  


      **NOTE**
- subse phle base class ka constructor call hota h uske baad derived class ka constructor call hota h.                       
- in destructor  at first deallocate child class memory then parent. 
- destructor works opposite of constructor.
*/

#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;

    // Parameterized constructor
    Person(string name, int age) {
        this->name = name;
        this->age = age;
        cout <<"parent constructor:" <<endl;
    }
    ~Person(){
      cout <<"parent Destructor:" <<endl;
    }
};

class Student : public Person { // inherit person class properties in public form into our student class.

public:
    int rollNo;

    // Constructor for Student class
    Student(string name, int age, int rollNo) : Person(name, age) {
        this->rollNo = rollNo;
     cout <<"child constructor:" <<endl;
    }

~Student(){
    cout << "child destructor"<<endl;
}
    void getInfo() {
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "rollNo: " << rollNo << endl;
    }
};

int main() {
    // Create a Student object with all necessary parameters
    Student s1("Aastha", 20, 3);

    s1.getInfo();
    return 0;
}

/*
  MODES OF INHERITANCE:

  -------------------------------------------------------------
  |           | Derived Class |Derived Class  |Derived Class  |
  |------------------------------------------------------------
  |Base Class | Private Mode  |Protected Mode | Public Mode   |
  |------------------------------------------------------------
  |Private    |Not inherited  |Not inherited  |Not inherited  |
  |------------------------------------------------------------
  |Protected  | Private       |Protected      |Protected      |
  |------------------------------------------------------------ 
  |Public     | Private       |Protected      | Public        |
  -------------------------------------------------------------
*/