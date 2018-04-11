#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/**
 * @brief The Polymorphism class
 *
 * Function Overloading (compile-time poly)
 * When there are multiple functions w the same name
 * but different parameters.
 *
 * Operator Overloading
 * (See the operator overloading cpp)
 *
 * Function overriding (Runtime polymorphism)
 * When a derived class has a definition for one of
 * the member functions of the base class
 */

class Parent {
public:
    void print() { cout<<"Parent Print"<<endl; }

};

class Child : public Parent {
public:
    void print() { cout<< "Child Print"<<endl; }

};

int poly_main() {
    Parent obj1;
    Child  obj2 = Child();

    // obj1 will call print in parent
    obj1.print();

    // obj2 will override print in parent
    // and will call the print in child
    obj2.print();

    return 0;
}

class Shape {
protected:
    int width, height;

public:
    Shape(int a = 0, int b = 0) {
        width = a;
        height = b;
    }
    virtual int area() {
        cout << "Parent class"<<endl;
        return 0;
    }
};

class Rectangle: public Shape {
public:
    Rectangle(int a = 0, int b = 0):Shape(a,b) { }

    int area() {
        cout << "Rectangle area: "<<endl;
        return (width*height);
    }
};

class Triangle: public Shape {
public:
    Triangle(int a = 0, int b = 0):Shape(a, b) { }

    int area() {
        cout << "Triangle area: "<<endl;
        return (width*height/2);
    }

};

int shapes_main() {
    Shape *shape;
    Rectangle rec(10, 7);
    Triangle  tri(10, 5);

    // store address of Rect
    shape = &rec;

    // call rect area
    shape->area();

    // storea ddress of triangle
    shape = &tri;

    // call triangle area
    shape->area();

    return 0;
}



