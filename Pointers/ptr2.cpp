#include <iostream>
using namespace std;
int main()
{
    int luckyNumbers[5] = {23,56,11,12,18};
    cout<<&luckyNumbers<<endl;
    cout<<"Address of 1st element = "<<&luckyNumbers[0]<<endl;
    cout<<luckyNumbers[3]<<endl;
    cout<<*(luckyNumbers + 1) <<endl;
    /*
    int luckyNumbers[5];
    for (int i = 0; i <= 4; i++)
    {
        cout << "Lucky Nmubers: ";
        cin >> luckyNumbers[i];
    }

    for (int i = 0; i <=4; i++)
    {
        //cout<<*(luckyNumbers + i)<<" ";
        cout<<luckyNumbers[i]<<" ";
    }  */
    return 0;
}