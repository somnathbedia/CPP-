#include <iostream>
using namespace std;

// creating class

class Car
{
public:
    string CompanyName;
    string Model;
    string Color;
    string Price;
    string LaunchedDate;
};
int main()
{
    // Object of class type Car
    Car Vehicle;
    Vehicle.CompanyName = "Ferrari";
    Vehicle.Model = "THEFERRARI2022";
    Vehicle.Color = "Yellow";
    Vehicle.Price = "$333333";
    Vehicle.LaunchedDate = "06 Feb 2022";

    cout <<"Company "<<  Vehicle.CompanyName << endl;
    cout <<"Model "<<  Vehicle.Model << endl;
    cout <<"Color "<<  Vehicle.Color << endl;
    cout <<"Price "<<  Vehicle.Price << endl;
    cout <<"Launched Date "<<  Vehicle.LaunchedDate << endl;

    return 0;
}