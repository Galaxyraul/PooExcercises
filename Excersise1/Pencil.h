//
// Created by cocol on 26/02/2022.
//

#ifndef EXCERSISE1_PENCIL_H
#define EXCERSISE1_PENCIL_H
#include <string>

class Pencil {
private:
    std::string _hardness = "HB";
    std::string _colour ="Black";
    int _size = 147;
public:
    Pencil();
    Pencil(const std::string& hardness,const std::string& colour,const int size );
    Pencil(const Pencil& orig);
    virtual ~Pencil();
    std::string getHardness();
    std::string getColour();
    int getSize();
    void setHardness(const std::string& hardness);
    void setColour(const std::string& colour);
    void setSize(const int size);
};


#endif //EXCERSISE1_PENCIL_H
