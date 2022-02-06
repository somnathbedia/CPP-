#include <iostream>
#include <list>
using namespace std;

class FavrouiteSite
{
public:
    list<string> ListOfbestSites;

    void GetInfo()
    {
        cout << "These sites are Back bone of every programmer" << endl;
        for (string websites : ListOfbestSites)
        {
            cout << websites << endl;
        }
    }
};

int main()
{
    FavrouiteSite sites;
    sites.ListOfbestSites.push_back("WWW.w3resource.com");
    sites.ListOfbestSites.push_back("WWW.stackoverflow.com");
    sites.ListOfbestSites.push_back("WWW.freecodecamp.com");
    sites.GetInfo();
    return 0;
}