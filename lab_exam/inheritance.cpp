// C++ program for Hybrid Inheritance

#include <iostream>
using namespace std;

// base class
class Vehicle {
public:

    Vehicle() {
        cout << "This is a Vehicle" << endl;
    }
};

//base class
class Fare {
public:
    Fare() {
        cout << "Fare of Vehicle\n";
    }
};

// first sub class
class Car: public Vehicle {

};

// second sub class
class Bus: public Vehicle, public Fare {

};


/**
  * Virtual Inheritance: Use when you have 2+ classes inherit from base class
  * and you need a 3rd class to inherit those 2+ classes.
  *
  */
// class C : public virtual Base

// class D : public virtual Base

// class Right : public C, public D


/**
  * Virtual Methods Notes:
  * Constructors can't be virtual.
  * Destructors should be virtual unless a class isn't to be used as a base class.
  *
  * Virtual functions ensure that the correct function is called for an object,
  * regardless of the type of ref used for function call.
  * Used for runtime polymorphism
  *
  * Should be accessed using ptr /  ref of base class type to achieve runtime polymorph.
  */

// CPP program to illustrate
// concept of Virtual Functions

//class base {
//public:
//    virtual void print ()
//    { cout<< "print base class" <<endl; }

//    void show ()
//    { cout<< "show base class" <<endl; }
//};

//class derived:public base {
//public:
//    void print ()
//    { cout<< "print derived class" <<endl; }

//    void show ()
//    { cout<< "show derived class" <<endl; }
//};

//int main() {
//    base *bptr;
//    derived d;
//    bptr = &d;

//    //virtual function, binded at runtime
//    bptr->print();

//    // Non-virtual function, binded at compile time
//    bptr->show();
//}

/**
  * OUTPUT:
  * print derived class
  * show base class
  */


