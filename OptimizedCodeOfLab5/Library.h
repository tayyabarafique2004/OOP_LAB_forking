#pragma once
#include <vector>
#include "Book.h"

class Library {
private:
    std::vector<Book> books;

public:
    void addBook(const Book& book);
    bool removeBook(const std::string& title);
    void listBooks() const;
};


