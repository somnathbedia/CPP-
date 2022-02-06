#include<stdio.h>
int swap(int a,int b){
    int temp;
    a=temp;
    b=a;
    a=b;
    return (a,b);
}
int main()
{
    int val1,val2,swaped;
    printf("Enter two integer to swap: ");
    scanf("%d %d",&val1,&val2);
    swaped=swap(val1,val2);
    printf("After swapping: %d\n",swaped);
    return 0;
}
