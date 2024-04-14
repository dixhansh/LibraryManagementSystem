#include <iostream>
#include <fstream>
#include "include/functions.h"
#include "include/book.h"


void Book::search_book(const char *t) 
{       
    ifstream in;
    bool flag = 0;
    in.open("src/database/record.dat", ios::binary|ios::in);
    if (!in)
    {
        cout<<"File not found\n";
    }
    else
    {
        in.read((char*)this, sizeof(*this));
        while (!in.eof())
        {
            if (!strcmp(t,title))
            {
                display_book();
                flag = 1;
            }
            in.read((char*)this, sizeof(*this));
            
        }
        in.close();
    }
    if (flag == 0)
    {
        cout<<"record does not exist\n";
    }
}