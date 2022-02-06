#include <iostream>
#include <list>
using namespace std;

class Faculty
{
public:
    string Name;
    string Specializatioin;
    string Department;
    string Email_Address;
    string Experience;
    list<string> Details;

    Faculty(string name, string specializatioin, string dept, string mail, string expe)
    {
        Name = name;
        Specializatioin = specializatioin;
        Department = dept;
        Email_Address = mail;
        Experience = expe;
    }

    void GetInfo()
    {
        cout << "Faculty of SXCRAN:" << endl;
        cout << "Name: " << Name << endl;
        cout << "Specilization: " << Specializatioin << endl;
        cout << "Department: " << Department << endl;
        cout << "Email Address: " << Email_Address << endl;
        cout << "Experience: " << Experience << endl;

        /*
        cout << "Faculty Address Details:" << endl;
        for (string FacultyDetails : Details)
        {
            cout << FacultyDetails << endl;
        }  */
    }
};

int main()
{
    Faculty ScienceFaculty("SN Prasad", "C++ programming", "CSE", "snp@gmail.com", "2014-2022");
    // ScienceFaculty.Details.push_back("Kantatoli");
    // ScienceFaculty.Details.push_back("835101");
    // ScienceFaculty.Details.push_back("Camil Bulke path");
    // ScienceFaculty.Details.push_back("Ranchi");
    ScienceFaculty.GetInfo();

    Faculty ScienceFaculty2("Sourav kumar", "Communication", "ARTS", "srvSXC@gmail.com", "2018-2022");
    ScienceFaculty2.GetInfo();

    Faculty ScienceFaculty3("Kamaldeep kumar", "JAVA programming", "CSE", "kamalsxc@gmail.com", "2010-2022");
    ScienceFaculty3.GetInfo();

    Faculty ScienceFaculty4("Supriya Gupta", "Discrete Mathematics", "CSE", "sgSXCRAN@gmail.com", "2016-2022");
    ScienceFaculty4.GetInfo();

    Faculty ScienceFaculty5("Sachin Kumar", "Statistics", "STATISTICS", "sachinSXC@gmail.com", "2009-2022");
    ScienceFaculty5.GetInfo();

    Faculty ScienceFaculty6("Dinesh Prasad", "Mathematics", "MATHEMATICS", "midSXC@gmail.com", "2010-2022");
    ScienceFaculty6.GetInfo();

    // system("pause>0");
    return 0;
}