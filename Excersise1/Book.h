//
// Created by cocol on 26/02/2022.
//

#ifndef EXCERSISE1_BOOK_H
#define EXCERSISE1_BOOK_H
#include <string>

class Book {
public:
    Book();
    Book(const std::string &author, const std::string &name, const std::string &type, int publicationYear, int price);
    Book(const Book& orig);
private:
    std::string _author = "";
    std::string _name = "";
    std::string _type = "";
    int _publicationYear = 0;
    int _price = 0;
public:
    std::string getAuthor() const;

    void setAuthor(const std::string &author);

    void setName(const std::string &name);

    void setType(const std::string &type);

    void setPublicationYear(int publicationYear);

    void setPrice(int price);

    std::string getName() const;

    std::string getType() const;

    int getPublicationYear() const;

    int getPrice() const;
};





#endif //EXCERSISE1_BOOK_H
