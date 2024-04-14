#include <iostream>
#include "include/functions.h"
#include "include/book.h"
using namespace std;


    Book::Book()
        {
            bookid = 0;
            strcpy(title, "no title"); 
            price = 0;
        } 
    void Book::get_book()
        {
          cout<<"Enter book Id, book title and its price\n";
          cin>>bookid;
          cin.ignore();
          cin.getline(title,19);
          cin>>price;
        }
    void Book::display_book()
        {
            cout<<"Book ID-> "<<bookid<<"  "<<"Title-> "<<title<<"  "<<"Price-> "<<price<<endl;
        }
  
        