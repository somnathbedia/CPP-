#include<iostream>
#include <list>
using namespace std;
class employee {
    public:
    string Name;
    string Email;
    int ID;
    int OfficeNumber;
    list<string> Address;
};
int main(){
    employee employee1;
    employee1.Name = "Surya Narayan";
    employee1.Email = "snp@sxcran.org";
    employee1.ID = 354672;
    employee1.OfficeNumber = 82;
    employee1.Address = {"Kantatoli","835101","Camil Bulke path","Ranchi"};

    cout<<"Empoyee Details:"<<endl;
    cout<<"Name: "<<employee1.Name<<endl;
    cout<<"Email Address: "<<employee1.Email<<endl;
    cout<<"Emp ID: "<<employee1.ID<<endl;
    cout<<"Office no. "<<employee1.OfficeNumber<<endl;
    cout<<"Address:"<<endl;
    for(string EmpAddress: employee1.Address){
        cout<<EmpAddress<<endl;
    }

    //return 0;
    system("pause>0");
}