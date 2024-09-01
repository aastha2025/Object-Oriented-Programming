/*
Encapsulation: It is wrapping up of data & member funcitons in a single unit called class.
  ------              -------------------------------------------------------------


                |-----------------------------------|
 - Combination of | data/properties + member function | written in class called encapsulation.
                |-----------------------------------|

- Helps in data hiding : hide sensitive information by using private access modifier.
          -------------
  
*/
//ex1: 


#include <iostream>
#include<string>
using namespace std;

class Bank {
    // data hiding:
    private:
      double balance;
     string password;
// access to everyone
    public:
      string accountId;
      string  username;

void setBalance(double b ){
    balance = b;
}

double getBalance(){
    return balance;
}

void setPassword(string pass){
    password = pass;
}

string getPassword(){
    return password;
}

};


int main(){
    Bank b1;
    b1.accountId = "PNB002355";
    b1.username = "Aastha";
    b1.setBalance(239000);
    b1.setPassword("24skkf");
    
 cout << b1.accountId <<endl;
 cout << b1.username <<endl;
 cout << b1.getBalance() << endl;
 cout << b1.getPassword() <<endl;
    return 0;
}