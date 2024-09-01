/*
-- Run time polymorphism // ismai run time per pta chlta h kya output ayga.


: parent & Child both contain the same function with different implementation.
: The parent class function is said to be overridden

ex1: Function Overriding: 
- Overriding is dependent on INHERITANCE.
- parent or child dono mai same function h but output depent ki humne kis class ke function ke liye object declare kiya h or ye runtime epr decide hota h.
-parent class ka function child class override krleta h hence child class ke  liye child class ke function ki zyada priority hoti h.


ex2: Virtual Functions:
 - A virtual function is a member function that you expect to be redefined in derived class.
 - use of  virtual keyword this function is used.
*/

#include <iostream>
#include<string>
using namespace std;

// Function Overriding
class  Parent{
public:
    void getInfo(){
        cout << "parent class" << endl;
    }

    //virtual function
 virtual void hello(){
    cout << "hello from parent" << endl;
}

};

// Function Overriding
class Child : public Parent{
    public:
    void  getInfo(){
       cout << "child class" << endl;

     }

    //virtual function
     void hello(){
        cout << "hello from child" << endl;
     }
};

int main(){

 Child c1;
 c1.hello();
 c1.getInfo();
    return 0;
}

/*

- Virtual functions are Dynamic in nature.
- Defined by the keyword "virtual" inside a base class and are always declared with a base class and overridden in a child class.
- A virtual function is called during Runtime.
*/