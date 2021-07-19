#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int arr[n];

        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
         vector<int> a;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==arr[i+1])
            a.push_back(arr[i]);
        }
        for(int i=0;i<a.size();i++)
            cout<<a[i];
    }
    return 0;
}
