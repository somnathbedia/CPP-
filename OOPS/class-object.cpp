#include <iostream>
#include <list>
using namespace std;
class student
{
public:
    string Name;
    string Department;
    int AdmissionFee;
    list<string> RegistrationDetails;
};

int main()
{
    student studentDetails;
    studentDetails.Name = "Riheo";
    studentDetails.Department = "Computer Science";
    studentDetails.AdmissionFee = 44200;
    studentDetails.RegistrationDetails = {studentDetails.Name,studentDetails.Department,"ST. Xavier's college Ranchi"};

    cout<<"Name: "<<studentDetails.Name<<endl;
    cout<<"Dept: "<<studentDetails.Department<<endl;
    cout<<"Admission fee: "<<studentDetails.AdmissionFee<<endl;
    cout<<"Registration Details "<<endl;
    //for each loop
    for(string  Details: studentDetails.RegistrationDetails){
        cout<<Details<<endl;
    }
    return 0;
}
