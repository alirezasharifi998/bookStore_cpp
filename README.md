# BookStore

A simple C++ project to manage and display book details.

## Project Structure

```
main.cpp
include/
    book.hpp
    utilities.hpp
src/
    book.cpp
```

## Features

- Manage book details: title, author, and publication date.
- Display book details in a formatted way.
- Overloaded `<<` operator for easy output.

## How to Build and Run

1. Compile the project:
   ```bash
   g++ -o bookStore main.cpp src/*
   ```

2. Run the executable:
   ```bash
   ./bookStore
   ```

## Example Output

```
Title : book-1
Date: 1404 / 2 / 15
Author: ali
```

## License

This project is open-source and available under the MIT License.