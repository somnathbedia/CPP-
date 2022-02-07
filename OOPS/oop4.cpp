#include <iostream>
#include <list>
using namespace std;

class BeerBar
{
public:
    list<string> Wine;

    void GetInfo()
    {
        cout << "Wine And Beer Available in our Shop" << endl;
        for (string Champagn : Wine)
        {
            cout << Champagn << endl;
        }
    }
};

int main()
{
    BeerBar Brand;
    Brand.Wine.push_back("Bacardi");
    Brand.Wine.push_back("Mc Dowles");
    Brand.Wine.push_back("OC Blue");
    Brand.Wine.push_back("Blinder Pride");
    Brand.Wine.push_back("Imperial Blue");
    Brand.GetInfo();

    return 0;
}