//
// Created by cocol on 26/02/2022.
//

#include "Book.h"

Book::Book() {}

Book::Book(const std::string &author, const std::string &name, const std::string &type, int publicationYear, int price)
        : _author(author), _name(name), _type(type), _publicationYear(publicationYear), _price(price) {}

Book::Book(const Book &orig)
    :_author(orig._author),_name(orig._name),_type(orig._type),_publicationYear(orig._publicationYear),_price(orig._price){
}
