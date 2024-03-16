#include "Book.h"

Book::Book(const std::string& t, const std::string& a, int py)
    : title(t), author(a), publicationYear(py) {}

const std::string& Book::getTitle() const {
    return title;
}

const std::string& Book::getAuthor() const {
    return author;
}

int Book::getPublicationYear() const {
    return publicationYear;
}

void Book::setTitle(const std::string& newTitle) {
    title = newTitle;
}

void Book::setAuthor(const std::string& newAuthor) {
    author = newAuthor;
}

void Book::setPublicationYear(int NewPublicationYear) {
    publicationYear = NewPublicationYear;
}