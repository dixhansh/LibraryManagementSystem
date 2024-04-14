#include <iostream>
#include <fstream>
#include "include/functions.h"
#include "include/book.h"


void Book::read_book()
{
    ifstream in;
    in.open("src/database/record.dat", ios::binary|ios::in); 
    if (!in)
    {
        cout<<"file does not exist\n";
    }
    else
    {
        in.read((char*)this,sizeof(*this));
        while (!in.eof())
        {
        display_book();
        in.read((char*)this,sizeof(*this));
        }
        in.close();
    }
    
}