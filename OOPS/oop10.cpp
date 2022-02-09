#include <iostream>
#include <list>
using namespace std;

class Customer
{
public:
    string Name;
    string Number;
    string AdharNumber;
    list<string> Address;

    Customer(string name, string number, string adharnumber)
    {
        Name = name;
        Number = number;
        AdharNumber = adharnumber;
    }

    void Information()
    {
        cout << "-:Customer Details:-" << endl;
        cout << "Customer Name: " << Name << endl;
        cout << "Customer Number: " << Number << endl;
        cout << "Customer Adhar Number: " << AdharNumber << endl;
        cout << "-:Permanent Address:-" << endl;
        // for each loop
        for (string PermanentAddress : Address)
        {
            cout << PermanentAddress << endl;
        }
    }
};

int main()
{
    Customer User1("Radhe Shyam", "7854168554", "98751465458");
    User1.Address.push_back("Giddi");
    User1.Address.push_back("Ramgarh");
    User1.Address.push_back("Jharkhand India");
    User1.Information();

    return 0;
}