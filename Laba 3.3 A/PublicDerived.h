#include "Complex.h"

class PublicDerived : public Complex{
public:
    PublicDerived(double a, double b);
    Complex& operator++();
    Complex operator++(int);
    Complex& operator--();
    Complex operator--(int);
    operator string() const;
};
