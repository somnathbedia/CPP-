#include<iostream>
using namespace std;
int main(){
        // Declaration and initialization of an Array
        int a[2][3]={{2,4,6},{3,6,9}};
        // Printing the array elements using for loop
        for(int i=0;i<2;i++){
            for(int j=0;j<3;j++){
                cout<<a[i][j];
            }
            cout<<endl;
        }
return 0;
}