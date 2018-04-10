#include <iostream>

using namespace std;

/**
 * @brief The OverloadOperators class
 * Overloaded operators are implemented as functions
 * Overloaded operator --> an operator function
 *
 */
class OverloadOperators {

    double real, imag;

public:
    OverloadOperators(double real = 0., double imag = 0.);
    OverloadOperators operator+(const OverloadOperators&) const;
};

// define the constructor
OverloadOperators::OverloadOperators(double r, double i) {
    real = r;
    imag = i;
}

// define overloaded + (plus) operator
OverloadOperators OverloadOperators::operator +(const OverloadOperators& c) const {
    OverloadOperators result;
    result.real = (this->real + c.real);
    result.imag = (this->imag + c.imag);
    return result;
}




