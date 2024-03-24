#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Complex {
protected:
    double y;
    double x;
public:
    Complex();
    Complex(double x, double y);
    Complex(const Complex& other);

    friend istream& operator>>(istream& input, Complex& complex);
    friend ostream& operator<<(ostream& output, const Complex& complex);
    friend Complex operator+(const Complex& complex1, const Complex& complex2);
    friend Complex operator*(const Complex& complex1, const Complex& complex2);
    friend bool operator==(const Complex& complex1, const Complex& complex2);
    Complex& operator=(const Complex& other);

    void Init(double x, double y);
    bool Read();
    void Display() const;
    string toString() const;
    string ToString() const;

    Complex add(const Complex& complex);
    Complex mul(const Complex& complex);
    bool equ(const Complex& complex);

    double getX() const;
    double getY() const;
    void setX(const double& newX);
    void setY(const double& newY);

};