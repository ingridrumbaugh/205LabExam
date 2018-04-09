#include <array> // using the array template class
#include <iostream>

using namespace std;

class Arrays {
    int array_demo() {

        /**
         * @brief yams
         * Basic array usage
         */
        int yams[3];
        yams[0] = 7;

        // create & init array
        int yamcosts[3] = {20, 40, 5};
        // NOTE: if compiler error: use static int yamcosts[3]

        /**
         *  Cool way to find num elements in an array
         */
        short things[] = {1, 5, 3, 8};
        int num_elements = sizeof things / sizeof (short);


        /**
          * Creating Dynamic Array with new
          */

        int * temp = new int [10]; // create block of 10 ints
        delete [] temp; // free dynamic array

        double *p3 = new double [3];
        p3[0] = 0.2;
        p3[1] = 0.5;
        p3[2] = 0.8;

        cout<< "p3[1] is "<< p3[1] <<".\n";
        p3 = p3 + 1; // Increment pointer
        cout<< "Now p3[0] is "<< p3[0] << " and ";
        cout<< "p3[1] is " << p3[1] << ".\n";
        p3 = p3 - 1; // return pointer to its' original state
        delete [] p3;

        /**
          * Pointers, Arrays and Pointer Arithmetic
          */

        // ptr declaration
        double *pn; // pn can point to a double value
        char   *pc; // pc can point to a char value

        double wages[3] = {5.0, 10.0, 3.0};
        short  stacks[3] = {3, 2, 1};

        // 2 ways to get the address of an array
        double * ptr_w = wages; // name of an array = address
        short  * ptr_s = &stacks[0]; // use the address operator

        // differences in addresses
        short tell[10];
        cout << tell << endl; // displays &tell[0]
        cout << &tell << endl; // displays address of whole array

        // dereferencing a pointer
        // means referring to the pointed-to value
        char *pl;
        // pc = new char; // assign address of newly allocated char memory
        *pl = 'S'; // place 'S' into memory location whose address is pc

        /**
          * 2D Arrays
          * and declarations using array template class
          */
        array<int, 5> ai;
        int arr[4][5];

        for (int row = 0; row < 4; row ++) {
            for (int col = 0; col < 5; col ++) {
                arr[row][col] = row*col;
            }
        }

        // 2D ARRAY POINTER
        int r = 2;
        int c = 1;
        arr[r][c] == *(*(arr+r)+c);

        return 0;
    }
};

