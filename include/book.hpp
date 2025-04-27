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
    Date _publicationDate;

public:
    // Constructor
    Book(const string &title, const string &author, Date publicationDate)
        : _title(title), _author(author), _publicationDate(publicationDate) {}

    // Getters
    string getTitle() const { return _title; }
    string getAuthor() const { return _author; }
    Date getPublicationYear() const { return _publicationDate; }

    // Setters
    void setTitle(const string &newTitle) { _title = newTitle; }
    void setAuthor(const string &newAuthor) { _author = newAuthor; }
    void setPublicationYear(Date &newDate) { _publicationDate = newDate; }

    // Display book details
    void displayDetails() const;
};
ostream &operator<<(ostream &, const Book &);

#endif