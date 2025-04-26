#include "../include/book.hpp"
#include <iostream>
using namespace std;

void Book::displayDetails() const
{
    Date temp = this->getPublicationYear();
    cout << "Title : " << this->getTitle()
         << "\nDate: "
         << temp.year << " / " << temp.month << " / " << temp.day << "\nAuthor: " << this->getAuthor() << endl;
}

ostream &operator<<(ostream &outStream, const Book &book)
{
    book.displayDetails();
    return outStream;
}