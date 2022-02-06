#include<iostream>
using namespace std;
int main(){
    int a[] = {7,8,9,4,56};
    int i;
    // print array element using for loop
    /*
     for(int i =0;i<5;i++){
         cout<<a[i]<<endl;
     } */
     // print array element using for each loop
        for(auto x:a)
        cout<<x<<endl;
    return 0;
}