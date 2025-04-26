#ifndef BOOK_H
#define BOOK_H

#include "utilities.hpp"
#include <string>
using namespace std;

class Book
{
private:
    string _title;
    string _author;
    Date _publicationYear;

public:
    // Constructor
    Book(const string &title, const string &author, Date publicationYear)
        : _title(title), _author(author), _publicationYear(publicationYear) {}

    // Getters
    string getTitle() const { return _title; }
    string getAuthor() const { return _author; }
    Date getPublicationYear() const { return _publicationYear; }

    // Setters
    void setTitle(const string &newTitle) { _title = newTitle; }
    void setAuthor(const string &newAuthor) { _author = newAuthor; }
    void setPublicationYear(Date &newDate) { _publicationYear = newDate; }

    // Display book details
    void displayDetails() const;
};
ostream &operator<<(ostream &, const Book &);

#endif