#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
// long flippingBits(long n) {
    

// }

int main()
{
	int n;cin>>n;
	vector<int> bn;
    while(n!=0)
    {
        int b=0;
        b=n%2;
        bn.push_back(b);
        n=n/2;
    }  
    for(int i=0;i<bn.size();i++)
    {
    	cout<<bn[i]<<" ";
    }  
    cout<<endl;
    reverse(bn.begin(),bn.end());
    for(int i=0;i<bn.size();i++)
    {
    	cout<<bn[i]<<" ";
    }  
    cout<<endl;
    for(int i=0;i<bn.size();i++)
    {
        if(bn[i]==0)
        {
            bn[i]=1;
        }
        else
        {
            bn[i]=0;
        }
    }
    for(int i=0;i<bn.size();i++)
    {
    	cout<<bn[i]<<" ";
    }  
    cout<<endl;
    int j=0;
    long ans=0;
    for(int i=(bn.size()-1);i>=0;i--)
    {
        ans+=(pow(2,j)*bn[i]);
        j++;
    }
    cout<<ans;
}
