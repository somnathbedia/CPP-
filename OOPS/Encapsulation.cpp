#include <iostream>
#include <list>
using namespace std;

class employee
{
    // Encapsulate part
private:
    string Name;
    string Email;
    int ID;
    int OfficeNumber;
    list<string> Locality;
    /* Encapsulate end */

    // Contructor
public:
    employee(string name, string email, int id, int officenumber)
    {
        Name = name;
        Email = email;
        ID = id;
        OfficeNumber = officenumber;
    }

    /* Constructor End */

     // Method
    void Address(string address){
        Locality.push_back(address);
    }

   
    void GetInfo()
    {
        cout << "Empoyee Details:" << endl;
        cout << "Name: " << Name << endl;
        cout << "Email Address: " << Email << endl;
        cout << "Emp ID: " << ID << endl;
        cout << "Office no. " << OfficeNumber << endl;
        cout << "Address:" << endl;
        for (string EmpAddress : Locality)
        {
            cout << EmpAddress << endl;
        }
    }
};

int main()
{
    employee employee1("Raju", "rjd@.com", 64567, 82);
    employee1.Address("Kantatoli");
    employee1.Address("835101");
    employee1.Address("Camil Bulke path");
    employee1.Address("Ranchi");
    employee1.GetInfo();

    system("pause>0");
}