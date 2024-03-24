#include "PublicDerived.h"

Complex operator+(const Complex& c1, const Complex& c2) {
    return Complex(c1.x + c2.x, c1.y + c2.y);
}

Complex operator*(const Complex& c1, const Complex& c2) {
    return Complex(c1.x * c2.x - c1.y * c2.y, c1.x * c2.y + c1.y * c2.x);
}

bool operator==(const Complex& c1, const Complex& c2) {
    return c1.x == c2.x && c1.y == c2.y;
}

Complex& PublicDerived::operator++() {
    ++x;
    return *this;
}

Complex PublicDerived::operator++(int) {
    Complex temp(*this);
    ++x;
    return temp;
}

Complex& PublicDerived::operator--() {
    --y;
    return *this;
}

Complex PublicDerived::operator--(int) {
    Complex temp(*this);
    --y;
    return temp;
}

PublicDerived::operator string() const {
    return toString();
}

PublicDerived::PublicDerived(double a, double b) : Complex(a, b)
{

}
