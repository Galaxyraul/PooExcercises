//
// Created by cocol on 26/02/2022.
//

#include "Pencil.h"

Pencil::Pencil() {}

Pencil::Pencil(const std::string &hardness, const std::string &colour, const int size)
                :_hardness(hardness),_colour(colour),_size(size) {}

Pencil::Pencil(const Pencil &orig):_hardness(orig._hardness),_colour(orig._colour),_size(orig._size) {}

std::string Pencil::getHardness() const{
    return _hardness;
}

std::string Pencil::getColour() const{
    return _colour;
}

int Pencil::getSize() const {
    return _size;
}

void Pencil::setHardness(const std::string &hardness) {
    this->_hardness = hardness;
}

void Pencil::setColour(const std::string &colour) {
    this->_colour = colour;
}

void Pencil::setSize(const int size) {
  this->_size = size;
}

Pencil::~Pencil() {}


