#include <iostream>
#include "Pencil.h"

int main() {
    Pencil p1;
    Pencil p2("F","Blue",180);
    p1.setSize(200);
    p1.setColour("Black");
    p1.setHardness("HB4");
    std::cout << p2.getSize();
}
