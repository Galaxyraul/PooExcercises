//
// Created by cocol on 26/02/2022.
//

#ifndef EXCERSISE1_POLYNOMIAL_H
#define EXCERSISE1_POLYNOMIAL_H


class polynomial {
private:
    float _a = 0;
    float _b = 0;
    float _c = 0;
    double sol1 = 0;
    double sol2 = 0;
    bool update = false;
public:
    polynomial();

    polynomial(float a, float b, float c);

    polynomial(const polynomial& orig);

    virtual ~polynomial();

    float getA() const;

    void setA(float a);

    float getB() const;

    void setB(float b);

    float getC() const;

    void setC(float c);

    double getSol1() const;

    double getSol2() const;

    void solveEquation ();
};


#endif //EXCERSISE1_POLYNOMIAL_H
