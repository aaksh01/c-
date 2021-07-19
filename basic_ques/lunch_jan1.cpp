#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t!=0)
    {
        int x,y,z;
        cin>>x>>y>>z;
        vector<int> ar;
        ar.push_back(x);
        ar.push_back(y);
        ar.push_back(z);
        sort(ar.begin(),ar.end());
        int n=ar.size();
        int p=ar[n-2]+ar[n-3];
        if(ar[n-1]==p)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
    return 0;
}

