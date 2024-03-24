#include "PrivateDerived.h"

PrivateDerived::PrivateDerived(double a, double b) : Complex(a, b) {}

Complex& PrivateDerived::operator++() {
    ++x;
    return *this;
}

Complex PrivateDerived::operator++(int) {
    Complex temp(*this);
    ++x;
    return temp;
}

Complex& PrivateDerived::operator--() {
    --y;
    return *this;
}

Complex PrivateDerived::operator--(int) {
    Complex temp(*this);
    --y;
    return temp;
}

PrivateDerived::operator string() const {
    return toString();
}