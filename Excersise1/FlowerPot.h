//
// Created by cocol on 26/02/2022.
//

#ifndef EXCERSISE1_FLOWERPOT_H
#define EXCERSISE1_FLOWERPOT_H
#include <string>

class FlowerPot {
private:
    std::string _material = "";
    std::string _colour ="";
    int _capacity = 0;
public:
    FlowerPot();

    FlowerPot(const std::string& material, const std::string& colour, const int capacity);

    FlowerPot(const FlowerPot& orig);

    ~FlowerPot();

    void setMaterial (const std::string& material);

    void setColour(const std::string& colour);

    void setCapacity(const int capacity);

    std::string getMaterial() const;

    std::string getColour() const;

    int getCapacity() const;
};


#endif //EXCERSISE1_FLOWERPOT_H
