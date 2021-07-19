#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        vector<int> ar;
        ar.insert(x);
        ar.insert(y);
        ar.insert(z);
        ar.sort();
        if(ar[n]==ar[n-1]+ar[n-2])
            cout<<"YES";
        else
            cout<<"NO";
    }
    return 0;
}
