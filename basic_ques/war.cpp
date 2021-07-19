#include<iostream>
using namespace std;
int main()
{
    int T,P,H;
    cin>>T;
    cout<<endl;
    for(int i=0;i<T;i++)
    {
        cin>>H>>P;
        while(H>P)
        {
            H=H-P;
            P=(P/2);
        }
        if(P<H)
            cout<<"0"<<endl;
        else
            cout<<"1"<<endl;
    }
}
