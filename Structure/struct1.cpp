#include <iostream>
using namespace std;

struct Smartphone
{
    string name;
    int storageSpace;
    string color;
    float price;
};

struct person
{
    string name;
    int age;
    char gender;
    Smartphone phone;
};

void smartphoneInfo(Smartphone smartphone1)
{
    cout << "Phone: " << smartphone1.name << endl;
    cout << "storageSpace: " << smartphone1.storageSpace << " GB" << endl;
    cout << "color: " << smartphone1.color << endl;
    cout << "price: " << smartphone1.price << endl;
}

void personInfo(person p1){
    cout<<"Name: "<<p1.name<<endl;
    cout<<"Age: "<<p1.age<<endl;
    cout<<"Gender: "<<p1.gender<<endl;
    smartphoneInfo(p1.phone);
}

int main()
{
    Smartphone smartphone1, smartphone2;
    smartphone1.name = "Iphone 13 pro max";
    smartphone1.storageSpace = 64;
    smartphone1.color = "Grey";
    smartphone1.price = 1299.99;

    smartphone2.name = "Sony";
    smartphone2.storageSpace = 128;
    smartphone2.color = "Black";
    smartphone2.price = 1999.4;

    // smartphoneInfo(smartphone1);
    // smartphoneInfo(smartphone2);

    person p1;
    p1.name = "Anirudh";
    p1.age = 18;
    p1.gender = 'M';
    p1.phone = smartphone1;
    personInfo(p1);

   // return 0;
    system("pause>0");
}