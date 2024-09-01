/*

4) Hierarchial Inheritance
    
      parent                         person (name, age)
      /   \                           /   \ 
     /     \                         /     \ 
  child    child           (rollNo)student  teacher(subject)
                           

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

class Teacher :public Person{
    public:
        string subject;
};


int main() {
    // Create a Student object with all necessary parameters
    Teacher s1;
     s1.name = "aastha";
     s1.subject= "physics";

     cout << "name:" << s1.name << endl;
     cout << "subject:" << s1.subject <<endl;
    
    return 0;
}



/*
5) Hybrid inheritance


   tree structure
   
   ex: person 
       / \
      /   \
   student teacher
     | \       \ 
     |   \ ----\    
   gradStudent  TA
                

It is a combination of all the other types of inheritance 
*/