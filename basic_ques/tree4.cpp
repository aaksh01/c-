#include<bits/stdc++.h>
#define int long
using namespace std;
int32_t main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        bool flag=1;
        set<int> arr;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            arr.insert(x);
            if(x!=0)
                flag=0;
        }
        if(flag==1)
            cout<<0<<"\n";
        else if(arr[0]==0)
        {
            cout<<arr.size()-1<<"\n";
        }
        else
            cout<<arr.size()<<"\n";
    }
    return 0;
}
