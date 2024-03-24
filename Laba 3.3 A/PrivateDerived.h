#include "PublicDerived.h"

class PrivateDerived : private Complex{
public:
    PrivateDerived(double a, double b);
    Complex& operator++();
    Complex operator++(int);
    Complex& operator--();
    Complex operator--(int);
    operator string() const;
};