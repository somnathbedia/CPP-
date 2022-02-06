#include <iostream>
#include <list>
using namespace std;

class employee
{
public:
    string Name;
    string Email;
    int ID;
    int OfficeNumber;
    list<string> Address;

    // Contructor
    employee(string name, string email, int id, int officenumber)
    {
        Name = name;
        Email = email;
        ID = id;
        OfficeNumber = officenumber;
    }

    // Method
    void GetInfo()
    {
        cout << "Empoyee Details:" << endl;
        cout << "Name: " << Name << endl;
        cout << "Email Address: " << Email << endl;
        cout << "Emp ID: " << ID << endl;
        cout << "Office no. " << OfficeNumber << endl;
        cout << "Address:" << endl;
        for (string EmpAddress : Address)
        {
            cout << EmpAddress << endl;
        }
    }
};

int main()
{
    employee employee1("Raju", "rjd@.com", 64567, 82);
    employee1.Address.push_back("Kantatoli");
    employee1.Address.push_back("835101");
    employee1.Address.push_back("Camil Bulke path");
    employee1.Address.push_back("Ranchi");
    employee1.GetInfo();

    system("pause>0");
}