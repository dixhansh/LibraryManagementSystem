#include <iostream>
#include <fstream>
#include "book.h"
#include "functions.h"

void Book::delete_book(const char* t)
{
    ifstream in;
    ofstream out;

    in.open("src/database/record.dat", ios::binary|ios::in);
    if (!in)
    {
        cout<<"File does not exist\n";
    }
    else{
    out.open("temp.dat", ios::binary|ios::out);

    in.read((char*)this, sizeof(*this));
    while (!in.eof())
    {
        if (strcmp(title,t) != 0 ) // if title and t are same
        {   
            out.write((char*)this,sizeof(*this));
        }
            in.read((char*)this, sizeof(*this));
    }
        in.close();
        out.close();
        remove("record.dat");
        rename("temp.dat","record.dat");
}
}

