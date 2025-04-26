#include "../include/book.hpp"
#include <iostream>
using namespace std;
void Book::displayDetails() const
{
    Date temp = this->getPublicationYear();
    cout << this->getTitle() << " " << temp.year << " / " << temp.month << " / " << temp.day << " " << this->getAuthor();
}