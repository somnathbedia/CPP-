#include <iostream>
#include <list>
using namespace std;

class library
{
public:
    list<string> AvailableBook;

    void GetInfo()
    {
        cout << "List of book Available in our Library" << endl
             << endl;
        for (string websites : AvailableBook)
        {
            cout << websites << endl;
        }
    }
};

int main()
{
    library Books;
    Books.AvailableBook.push_back("How to talk with Anyone");
    Books.AvailableBook.push_back("Rich Dad Poor Dad");
    Books.AvailableBook.push_back("Ansi C");
    Books.AvailableBook.push_back("Word Power Made Easy");
    Books.AvailableBook.push_back("Born to Fly");
    Books.AvailableBook.push_back("Let Us C");
    Books.AvailableBook.push_back("Psychology of Money");
    Books.GetInfo();

    return 0;
}