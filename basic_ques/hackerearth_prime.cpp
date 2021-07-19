#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

const int sz=100001;
int prime[sz];
vector<int> ar;

void seive()
{
	prime[0]=prime[1]=1;
	for(int i=2;i*i<=sz;i++)
	{
		if(!prime[i])
		{
			for(int j=i*i;j<sz;j+=i)
			{
				prime[j]=1;
			}
		}
	}
	
}
int main()
{
	seive();
	//int t;cin>>t;while(t--)
	int l,r;cin>>l>>r;
	for(int i=l;i<r;i++)
	{
		if(!prime[i])
			cout<<i<<" "<<endl;
	}

}
