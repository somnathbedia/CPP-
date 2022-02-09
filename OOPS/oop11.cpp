#include <iostream>
using namespace std;

class Customer
{
public:
    string Name;
    string Number;
    string AdharNumber;
    string PermamnentAddress;

    void Information()
    {
        cout << "-:Customer Details:-" << endl;
        cout << "Customer Name: " << Name << endl;
        cout << "Customer Number: " << Number << endl;
        cout << "Customer Adhar Number: " << AdharNumber << endl;
        cout << "-:Permanent Address:-" << endl;
        cout << PermamnentAddress << endl;
    }
};

int main()
{
    Customer user1;
    cout << "Enter User Name Number and Adhar Number " << endl;
    cin >> user1.Name >> user1.Number >> user1.AdharNumber;
    cout << "Enter Address:" << endl;
    cin >> user1.PermamnentAddress;
    user1.Information();

    return 0;
}