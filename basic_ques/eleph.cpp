#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long sum=0;
        long N,C;
        cin>>N>>C;
        int arr[N];
        for(int i=0;i<N;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum<=C)
        cout<<"Yes"<<"\n";
        else
        cout<<"No"<<"\n";
    }
    return 0;
}
