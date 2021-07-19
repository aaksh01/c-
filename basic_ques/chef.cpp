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
       while(H<=0 || P<=0)
       {
           H=H-P;
           P=P/2;
       }
        if(P<=0)
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
    }
}
