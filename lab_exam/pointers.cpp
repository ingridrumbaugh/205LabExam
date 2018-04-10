#include <iostream>

using namespace std;

class Pointers {

/**
  * Simple Pointer Example
  */

    double  wages[3] = {5.0, 4.0, 3.0};
    short  stacks[3] = {3, 2, 1};

    // two ways to get the address of an array
    double *pw = wages; // name of an array = address
    short  *ps = &stacks[0]; // or use the address operator

    int hello = 6;
    int *ph   = &hello; // assign address of int to pointer

    // Brass * pb = &dilly; where dilly is a function
    // Brass & rb = dilly;

    /**
      * Passing by Value
      */
    //void sneezy(int x);

    int s_main() {
        int times = 20;
        sneezy(times);
    }

    void sneezy(int x) {
        // do some shit
    }

    /**
      * Passing by Reference
      */
    //void sleepy(int &x);

    int sl_main() {
        int times = 20;
        sleepy(times);
    }

    void sleepy(int &x) {
        // do some more shit
    }

    /**
      * Swapping with References and Pointers
      */
    void swap1(int & a, int & b); // a, b are references for ints
    void swap2(int * p, int * q); // p, q are addresses of ints
    void swap3(int   y, int   z); // y, z are new variables


};






