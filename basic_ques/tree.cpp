#include<bits/stdc++.h>
using namespace std;
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
        int second=0,count=1;
        int i=n-2;
        while(i==0)
        {
            if(arr[i]==arr[n-1])
                i--;
            else
                second=arr[i];
            for(int j=0;j<n;j++)
            {
                if(arr[j]>second)
                    arr[j]-second;
            }
            count+=1;
        }
        cout<<count<<"\n";

    }
    return 0;
}
