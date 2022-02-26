#include <iostream>
#include "Pencil.h"
#include "Book.h"
#include "FlowerPot.h"
#include "polynomial.h"
#include "Ellipse.h"

int main() {
    Pencil p1;
    Pencil p2("F","Blue",180);
    p1.setSize(200);
    p1.setColour("Black");
    p1.setHardness("HB4");
    Pencil p3(p2);
    std::cout << "The size of the pencil is:" << p3.getSize() << " mm" << std::endl;
    
    Book b1("Cixin Liu", "The three-body problem", "Sci-Fi", 2006, 20);
    Book b2;
    b2.setAuthor("JK Rowling");
    b2.setName("Harry Potter and the chamber of secrets");
    b2.setPrice(15);
    b2.setType("Fantasy");
    b2.setPublicationYear(1998);
    Book b3(b2);
    std::cout<< "The author of " + b3.getName() + " is " + b3.getAuthor() << std::endl;

    FlowerPot f1;
    FlowerPot f2("clay","Red",3);
    FlowerPot f3(f2);
    std::cout<< "The pot has a capacity of:" << f3.getCapacity() << " L" << std::endl;

    polynomial pol1;
    polynomial pol2(1,2,-3);
    polynomial pol3(pol2);
    try{
        pol3.solveEquation(pol3);
        std::cout << "The first solution is: " << pol3.getSol1() << std::endl;
        std::cout << "The second solution is " << pol3.getSol2() << std::endl;
    }catch (std::string& e){
        std::cout << e;
    }

    Ellipse e1;
    Ellipse e2(20,40,80);
    Ellipse e3(e2);
    std::cout << "The focus of the ellipse is " << e3.getDistanceFocus() << " mm away" <<std::endl;

}
