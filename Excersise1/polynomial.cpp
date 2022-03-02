//
// Created by cocol on 26/02/2022.
//

#include "polynomial.h"
#include <cmath>
#include <string>

polynomial::polynomial(float a, float b, float c) : _a(a), _b(b), _c(c) {}

polynomial::polynomial() {}

polynomial::polynomial(const polynomial &orig)
: _a(orig._a), _b(orig._b), _c(orig._c),sol1(orig.sol1),sol2(orig.sol2),update(orig.update) {}

float polynomial::getA() const {
    return _a;
}

void polynomial::setA(float a) {
    this->update = false;
    this->_a = a;
}

float polynomial::getB() const {
    return _b;
}

void polynomial::setB(float b) {
    this->update = false;
    this->_b = b;
}

float polynomial::getC() const {
    return _c;
}

void polynomial::setC(float c) {
    this->update = false;
    this->_c = c;
}

void polynomial::solveEquation() {
    double gradient = (pow(_b, 2) - 4 * _a * _c);
    if (gradient < 0){
        throw std::string ("Roots of the polynomial cannot be found in the real field ");
    }
    sol1 = (-_b + std::sqrt(gradient)) / (2 * _a);
    sol2 = (-_b - std::sqrt(gradient)) / (2 * _a);
    this->update = true;
}

double polynomial::getSol1() const {
    return sol1;
}

double polynomial::getSol2() const {
    return sol2;
}

polynomial::~polynomial() {

}

