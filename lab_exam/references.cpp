#include <iostream>

using namespace std;

int ref_main() {

    int x = 10;

    // ref is a reference to x
    int &ref = x;

    // value of x is now 20
    ref = 20;

    // value of x is now 30
    x = 30;

    return 0;
}

void swapstuff(int &first, int &second) {
    int temp = first;
    first = second;
    second = temp;
}

int swap_main() {
    int a = 2, b = 3;
    int &ra = a;
    int &rb = b;
    swapstuff(ra, rb);

    return 0;
}







