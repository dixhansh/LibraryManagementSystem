#ifndef BOOK_H
#define BOOK_H
#include <string.h>

using namespace std;
class Book {
private:
    int bookid;
    char title[20];
    double price;

public:
    Book(); // Default constructor
    
    void get_book(); //To take entries of books from user
    void display_book();  
    int add_book();
    void read_book();
    void search_book(const char *);
    void delete_book(const char *);
};

#endif
