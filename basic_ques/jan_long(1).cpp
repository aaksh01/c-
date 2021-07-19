#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;cin>>t;
   while(t--)
   {
       int n,k,d;
       cin>>n>>k>>d;
       int sum=0;
       int ar[n];
       for(int i=0;i<n;i++)
       {
           cin>>ar[i];
       }
       for(int i=0;i<n;i++)
       {
           sum+=ar[i];
       }
      // cout<<sum<<endl;
       int ncts;
       ncts=sum/k;
       //cout<<ncts<<endl;
       if(ncts==0)
        cout<<"0"<<endl;
       else if(ncts<=d)
       cout<<ncts<<endl;
       else
        cout<<d<<endl;

   }
   return 0;
}
