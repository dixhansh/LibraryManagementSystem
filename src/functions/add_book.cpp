#include <iostream>
#include <fstream>
#include "include/functions.h"
#include "include/book.h"



int Book::add_book()
{
    if (bookid == 0 && price == 0)
    {
        cout<<"invalid data. Not stored in file\n";
        return 0;
    }
    else
    {
    ofstream out;
    out.open("src/database/record.dat", ios::binary|ios::app);
    out.write((char*)this, sizeof(*this));
    out.close();
    cout<<"Record stored successfully\n";
    return(1);
    }
}