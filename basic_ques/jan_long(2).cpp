#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        char ar[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p'};
        int n;cin>>n;
        string s;
        for(int i=0;i<n;i++)
            cin>>s;
        for(int i=0;i<n;i+=4)
        {
            int a=s[i];
            int p=stoi(a,0,2);
            cout<<p<<"\n";
        }
    }

    return 0;
}
