//
// Created by cocol on 26/02/2022.
//

#ifndef EXCERSISE1_POLYNOMIAL_H
#define EXCERSISE1_POLYNOMIAL_H


class polynomial {
private:
    int _a = 0;
    int _b = 0;
    int _c = 0;
    double sol1 = 0;
    double sol2 = 0;
public:
    polynomial();

    polynomial(int a, int b, int c);

    polynomial(const polynomial& orig);

    virtual ~polynomial();

    int getA() const;

    void setA(int a);

    int getB() const;

    void setB(int b);

    int getC() const;

    void setC(int c);

    double getSol1() const;

    double getSol2() const;

    void solveEquation ( polynomial);
};


#endif //EXCERSISE1_POLYNOMIAL_H
