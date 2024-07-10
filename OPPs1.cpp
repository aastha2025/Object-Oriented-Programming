#include <bits/stdc++.h>
//#include "hero.cpp"
using namespace std;

// empty class byte value is 1
/*Getter and setter used to access private values of class*/


class hero{

    // properties
    private:
    int health;
    public:
     char level;

     hero(){
        cout<<" simple Constructor called" <<endl;
     }

     // parameterised constructor 
     hero(int health){
        cout << "this ->" << this << endl;
      this ->  health = health;
     }

    hero(int health , char level){
        this -> level = level;
    this ->  health = health;
     }

     void print(){
        cout << "health" << this->health << endl;
        cout<< "level" << this -> level<<endl;
     }
     int getHealth(){
        return health;
     }

    char getLevel(){
        return level;
    }
    void setHealth(int h){

        health = h;
    }
    void setLevel(char ch){
        level = ch;
    }
};

int main(){



/*
   // static allocation
   hero a;
   cout<< "level is:" a.level <<endl;
    cout<< "health is:" a.getHealth <<endl;


//dynamically allocaiton
hero *b = new hero;
//type 1
cout << "level is:"<< (*b).level <<endl;
 cout << "health is:"<< (*b).getHealth() <<endl;

//type 2 
cout << "level is:"<< b->level <<endl;
 cout << "health is:"<< b->getHealth() <<endl;

    // creation of object
   hero aastha;
   cout<<"Size:"<< sizeof(aastha)<<endl;
   cout << "Aastha health is" << aastha.getHealth() <<endl;
   //aastha.health = 70;
   // use setter
   aastha.setHealth(70);
      cout << "Aastha level is" << aastha.getLevel() <<endl;
   aastha.level='A';
   cout<<"health is :" aastha.health <<endl;
      cout<<"level is :" aastha.level <<endl;
*/

//object created staticlly
//cout << "hi" <<endl;
//hero aastha(10);
/*cout<<"address of aastha " << &aastha <<endl;
//cout <<"hello" <<endl;
aastha.print();
aastha.getHealth();

// dynamically 
hero *h = new hero(11);
h-> print();
 hero temp(22 , 'B');
 temp.print();*/
 //aastha.setHealth(70);
 //aastha.setLevel('c');
 hero aastha( 70 ,'c');
 aastha.print();

hero singh(aastha);
singh.print();


    return 0;
}