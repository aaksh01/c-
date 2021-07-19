#include<bits/stdc++.h>
using namespace std;
int scndh(int arr[], int mx)
{
    int n=sizeof(arr)/sizeof(arr[0]);
    int second=mx;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<mx){
        second=arr[i];
        break;}
    }
    return second;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int cnt=0;

        bool flag=true;
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
           {cin>>arr[i];
             if(arr[i]>0)
            flag=false;
            }

        if(flag==1)
           {cout<<0<<"\n";
            continue;
            }
        sort(arr,arr+n);
       int mx=arr[n-1];
        while(arr[0]!=mx)
        {
            int scnd=scndh(arr,mx);

            if(scnd==mx && scnd!=0){cout<<cnt<<endl;break;}
            if(scnd==mx)
            {
                cnt++;cout<<cnt+1<<"\n";break;
            }
            else
            {mx=scnd;cnt++;
            }
        }
    }
    return 0;
}
