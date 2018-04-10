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
    int *ph = &hello; // assign address of int to pointer

};
