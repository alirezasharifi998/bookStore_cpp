#include "include/book.hpp"
#include <iostream>
using namespace std;

int main()
{
    Book b1("book-1", "ali", {1404, 2, 15});
    cout << b1;
    return 0;
}