#pragma once
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    int publicationYear;

public:
    Book(const std::string& t, const std::string& a, int py);
    const std::string& getTitle() const;
    const std::string& getAuthor() const;
    int getPublicationYear() const;
    void setTitle(const std::string& newTitle);
    void setAuthor(const std::string& newAuthor);
    void setPublicationYear(int NewPublicationYear);
};

