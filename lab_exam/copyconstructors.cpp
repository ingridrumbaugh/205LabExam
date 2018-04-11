#include <iostream>

using namespace std;


/**
 * @brief The CopyConstructors class
 * Copy constructor is a member function which initializes
 * an object using another object of the same class.
 *
 * ClassName (const ClassName &old_obj);
 *
 * You use copy constructors when you want to pass an object of the
 * class to a function as an argument.
 * or when an object is constructed based on another object
 * of the same class.
 */
class CopyConstructors {

private:
    int x, y;
public:
    CopyConstructors(int x1, int y1) { x = x1; y = y1; }

    // Copy Constructor
    CopyConstructors(const CopyConstructors &cc2) {
        x = cc2.x;
        y = cc2.y;
    }

    int getX() { return x; }
    int getY() { return y; }
};

// In the main method:
int cc_main() {
    CopyConstructors cc1(10, 15); // Normal Constructor
    CopyConstructors cc2 = cc1; // Copy constructor called

    return 0;
}
