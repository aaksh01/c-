#include<iostream>
using namespace std;
int main()
{
    int n,r,rev=0;
    cout<<"enter the no.:";
    cin>>n;
int    m=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    cout<<rev<<endl;
    if(rev==m)
        cout<<"palindrome"<<endl;
    else
        cout<<"not pelindrom";

    return 0;
}
