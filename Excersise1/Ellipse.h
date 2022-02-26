//
// Created by cocol on 26/02/2022.
//

#ifndef EXCERSISE1_ELLIPSE_H
#define EXCERSISE1_ELLIPSE_H


class Ellipse {
private:
    float _distanceFocus = 0;
    float _lengthHorizontal = 0;
    float _lengthVertical = 0;
public:
    Ellipse();

    Ellipse(float distanceF1, float lengthHorizontal, float lengthVertical);

    Ellipse(const Ellipse& orig);

    virtual ~Ellipse();

    float getDistanceFocus() const;

    void setDistanceFocus(float distanceF1);

    float getLengthHorizontal() const;

    void setLengthHorizontal(float lengthHorizontal);

    float getLengthVertical() const;

    void setLengthVertical(float lengthVertical);

};


#endif //EXCERSISE1_ELLIPSE_H
