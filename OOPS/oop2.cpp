//  Somnath Bedia 
// Date: 07/02/2022 


#include <iostream>
using namespace std;

class Library
{
public:
    string BookName;
    string Author;
    int Price;
    string PublishedDate;

    // Constructor

    Library(string name, string author, int price, string published)
    {
        BookName = name;
        Author = author;
        Price = price;
        PublishedDate = published;
    }

    // Method

    void GetInfo()
    {
        cout << "Name of the Book: " << BookName << endl;
        cout << "Author: " << Author << endl;
        cout << "Price: " << Price << endl;
        cout << "Published on: " << PublishedDate << endl;
    }
};
int main()
{


    cout << "Book Avalable in our Library are" << endl;
    Library honey("Rich dad poor dad", "Kamles", 300, "1999-2000"); /* Invocking argument */
    honey.GetInfo();


    return 0;
}