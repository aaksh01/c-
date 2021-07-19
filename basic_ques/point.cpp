#include<iostream>
using namespace std;
int main()
{
    int a[5]={5,1,4,77};
    int *p=a,*q=&a[4];

    cout<<*p<<endl;
    cout<<endl;

    p++;
    cout<<*p<<endl;

    p--;
    cout<<*p;

    cout<<endl;
    cout<<*(p+2)<<endl;
}
