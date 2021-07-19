#include<iostream>
using namespace std;
int main()
{
    int A[12]={4,3,6,1,2,9,21,3,5,45,63,69};
    int p=A[1],*q=&A[11];

    cout<<p<<endl;
    cout<<endl;

    p++;
    cout<<p<<endl;
    cout<<endl;


    return 0;
}
