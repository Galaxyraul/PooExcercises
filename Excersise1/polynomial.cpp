//
// Created by cocol on 26/02/2022.
//

#include "polynomial.h"
#include <cmath>
#include <string>

polynomial::polynomial(int a, int b, int c) : _a(a), _b(b), _c(c) {}

polynomial::polynomial() {}

polynomial::polynomial(const polynomial &orig)
: _a(orig._a), _b(orig._b), _c(orig._c) {}

int polynomial::getA() const {
    return _a;
}

void polynomial::setA(int a) {
    this->_a = a;
}

int polynomial::getB() const {
    return _b;
}

void polynomial::setB(int b) {
    this->_b = b;
}

int polynomial::getC() const {
    return _c;
}

void polynomial::setC(int c) {
    this->_c = c;
}

void polynomial::solveEquation() {
        float gradient = (pow(_b, 2) - 4 * _a * _c);
        if (gradient < 0){
            throw std::string ("Roots of the polynomial cannot be found in the real field ");
        }
        sol1 = (-_b + std::sqrt(gradient)) / (2 * _a);
        sol2 = (-_b - std::sqrt(gradient)) / (2 * _a);
}

double polynomial::getSol1() const {
    return sol1;
}

double polynomial::getSol2() const {
    return sol2;
}

polynomial::~polynomial() {

}

