#include<iostream>
using namespace std;

int main()
{
    int var = 25;
    int* ptr = &var;
    cout<<"Var = "<<var<<endl;
    cout<<"Value at Var = "<<*ptr<<endl;
    cout<<"Address of var = "<<&var<<endl;
    cout<<"Value at pointer ptr = "<<ptr<<endl;
    *ptr = 29;
    cout<<"Var = "<<var<<endl;
    system("pause > 0");
    return 0;
}