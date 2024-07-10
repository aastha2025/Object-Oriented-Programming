// make class universe pass parameters  solar system name and years old  ,  access  together and seperately , set value  by setter and without setter.

#include <bits/stdc++.h>
using namespace std;

class universe {
 private:

 string solar_system_name;
 int years_old;

 public:
// access seperately
universe( string& name , int year): solar_system_name(name)  , years_old(year){}
 string getsolarsystemname(){
    return solar_system_name;
 }

int getyearsold(){
    return years_old;
}


// access together

void getuniverseinfo(){
cout<<solar_system_name << years_old<<endl;
}

// set value by setter 
void setsolarsystemname(string name){
     solar_system_name = name;
}

void setyearsold(int year){
    years_old= year;
}
// set value without setter

int  setuniverseinfo(string name , int year){
    solar_system_name = name;
    years_old = year;
}
};

int main(){
       //instance

        universe universe("milky way" , 30000000000);

    // access  attributes seperately
    cout<<"solar system name:" <<universe.getsolarsystemname()<<endl;
    cout<<"year old:" <<universe.getyearsold()<<endl;
    
    // access together 
  pair<string , int  > info = universe.getuniverseinfo();
  cout<<"solar system name :" << info.first << endl << "years old:" << info.second<<endl;
   
    //set attributes using setter
        universe.setsolarsystemname("milky way");
        universe.setyearsold(30000000000);
        cout<<"solar system name:" << universe.getsolarsystemname()<<endl;
        cout<<"year old:" << universe.getyearsold()<<endl;

// set attributes without  using setter
universe.setuniverseinfo("milky way" , 3000000000);
info = universe.getuniverseinfo();
cout<< "solar system name:"<< info.first << endl <<  " year old" << info.second <<endl;


return 0;}
