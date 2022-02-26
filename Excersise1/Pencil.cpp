//
// Created by cocol on 26/02/2022.
//

#include "Pencil.h"

Pencil::Pencil() {}

Pencil::Pencil(const std::string &hardness, const std::string &colour, const int size):_hardness(hardness),_colour(colour),_size(size) {}

Pencil::Pencil(const Pencil &orig) {}

std::string Pencil::getHardness(){
    return _hardness;
}

std::string Pencil::getColour() {
    return _colour;
}

int Pencil::getSize() {
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


