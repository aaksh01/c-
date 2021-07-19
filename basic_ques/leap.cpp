#include<iostream>
using namespace std;
int main()
{
    int y;
    cout<<"enter the year:";
    cin>>y;
    if(y%400==0)
        cout<<endl<<"leap year.";
    else if(y%4==0)
    {
        if(y%100==0)
            cout<<endl<<"not leap year.";
        else
            cout<<"leap year.";
    }
}
