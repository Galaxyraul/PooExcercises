//
// Created by cocol on 26/02/2022.
//

#include "Ellipse.h"

Ellipse::Ellipse() {}

Ellipse::Ellipse(float distanceF1, float lengthHorizontal, float lengthVertical) : _distanceFocus(
        distanceF1), _lengthHorizontal(lengthHorizontal), _lengthVertical(lengthVertical) {}

Ellipse::Ellipse(const Ellipse &orig): _distanceFocus(
        orig._distanceFocus), _lengthHorizontal(orig._lengthHorizontal), _lengthVertical(orig._lengthVertical) {}

Ellipse::~Ellipse() {

}

float Ellipse::getDistanceFocus() const {
    return _distanceFocus;
}

void Ellipse::setDistanceFocus(float distanceF1) {
    _distanceFocus = distanceF1;
}

float Ellipse::getLengthHorizontal() const {
    return _lengthHorizontal;
}

void Ellipse::setLengthHorizontal(float lengthHorizontal) {
    _lengthHorizontal = lengthHorizontal;
}

float Ellipse::getLengthVertical() const {
    return _lengthVertical;
}

void Ellipse::setLengthVertical(float lengthVertical) {
    _lengthVertical = lengthVertical;
}
