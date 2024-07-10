# Object-Oriented-Programming

# class:
-> It is real world entity. 
-> Also known  as blueprint representing a group of objects which shares some properties and behaviors.
-> here class has its own data members(variables) and functions ( used to manupulate those data members ).
-> data members and functions can be assessed and  used by creating instace of that class.

# object:
-> Object is identifiable entity with some properties and behavior . 
-> An Object is an instance of a Class. 
-> When class is ceated no memory is allocate dbut when its instance(object) created then memory is allocated.

# Access Modifiers:
Access modifiers are used to implement an important aspect of Object-Oriented Programming known as Data Hiding
3types 
 1. Public :-> All class members can be accessible to everyone.
          :->  by using direct dot (.)can be accessed.
    
2. Private:->  By default the access modifier for the members will be Private.
          :->  only be accessed by own class members not by  other class functions and members.
          :->  Only the member functions or the friend functions are allowed to access the private data members of the class. 

3. Protected :-> The protected access modifier is similar to the private access modifier in the sense that it can’t be accessed outside of its class unless with the help of a friend class.
             :-> The difference is that the class members declared as Protected can be accessed by any subclass (derived class) of that class as well.
             NOTE:-> hence use inheritance (subclass) for betterness.


#constructors: 
1. Constructor  name is the same as the class name .Constructor is invoked at the time of object creation.It do not return value, hence they do not have a return type. It gets called automatically when we create the object of the class.  Provides data for the object. can be overloaded.can not be declared virtual.
There are total 4 types of constructor:
copy  , parametrized , default , move 
