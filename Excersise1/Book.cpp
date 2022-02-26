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

std::string Book::getAuthor() const {
    return _author;
}

std::string Book::getName() const {
    return _name;
}

std::string Book::getType() const {
    return _type;
}

int Book::getPublicationYear() const {
    return _publicationYear;
}

int Book::getPrice() const {
    return _price;
}

void Book::setAuthor(const std::string &author) {
    this->_author = author;
}

void Book::setName(const std::string &name) {
    this->_name = name;
}

void Book::setType(const std::string &type) {
    this->_type = type;
}

void Book::setPublicationYear(int publicationYear) {
    this->_publicationYear = publicationYear;
}

void Book::setPrice(int price) {
    this->_price = price;
}
