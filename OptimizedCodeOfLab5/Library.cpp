#include "Library.h"
#include <iostream>

void Library::addBook(const Book& book) {
    books.push_back(book);
    std::cout << "\nBook has been added sucessfully!\n";
}

bool Library::removeBook(const std::string& title) {
    for (auto it = books.begin(); it != books.end(); ++it) {
        if (it->getTitle() == title) {
            books.erase(it);
            std::cout << "\nBook has been removed sucessfully!\n";
            return true;
        }
    }std::cout << "\nBook not Found...\n";
    return false;
}

void Library::listBooks() const {
    for (const auto& book : books) {
        std::cout << book.getTitle() << " - " << book.getAuthor() << std::endl;
    }
}
