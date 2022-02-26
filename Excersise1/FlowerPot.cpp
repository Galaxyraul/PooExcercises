//
// Created by cocol on 26/02/2022.
//

#include "FlowerPot.h"

FlowerPot::FlowerPot() {}

FlowerPot::FlowerPot(const std::string &material, const std::string &colour, const int capacity)
:_material(material),_colour(colour),_capacity(capacity) {}

FlowerPot::FlowerPot(const FlowerPot &orig)
:_material(orig._material),_colour(orig._colour),_capacity(orig._capacity) {}

FlowerPot::~FlowerPot() {}

void FlowerPot::setMaterial(const std::string &material) {
    this->_material = material;
}

void FlowerPot::setColour(const std::string &colour) {
    this->_colour = colour;
}

void FlowerPot::setCapacity(const int capacity) {
    this->_capacity = capacity;
}

std::string FlowerPot::getMaterial() const {
    return _material;
}

std::string FlowerPot::getColour() const {
    return _colour;
}

int FlowerPot::getCapacity() const {
    return _capacity;
}