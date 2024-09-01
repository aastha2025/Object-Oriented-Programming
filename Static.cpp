/*
STATIC KEYWORD:

* Static Variables:::

  - Variables declared as static in a function are created & initialised once for the lifetime of the program.
  // in function.

- Static variables in a class are created & initialised once. They are shared by all the objects of the class. 
// in Class.


* Static Objects:::

*/


#include <iostream>
#include<string>
using namespace std;


// class A{
//   public:
//     int x = 0;
//     void incX(){
//         x = x+1;
//     }
// };
// void fun(){
//   static int x = 0;
//   // initialisation run ones and rest code run multiple times.
//     cout <<" X :"  << x << endl;
//     x++; 
// };

class ABC{

  public:
  ABC(){
    cout << "constructor" << endl;
  }

   ~ABC(){
    cout << "destructor" << endl;
  }
};

int main(){
//     A obj1;
//     A obj2;
//     obj1.x = 100;
//     obj2.x = 200;
//     cout << obj2.x << endl;
//     //cout << obj.x << endl;
//     // obj.incX();
//     //cout << obj.x << endl;
//    cout << obj1.x << endl;

// //   fun();
// //   fun();

if(true){
  static  ABC obj;
}
cout << "End of Main Function" << endl;

return 0;
}
