#include<bits/stdc++.h>
using namespace std;

int scndl(vector<int> arr)
{
    int second=0;
    for(int i=arr.size()-2;i>=0;i--)
        {
            if(arr[i]<arr[arr.size()-1])
            {
                second=arr[i];
                break;
            }
       }
       return second;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr.begin(),arr.end());
        int second=scndl(arr);
        cout<<second<<endl;
        /*int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
                continue;
        }
        */
    }
    return 0;
}
