#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

const int sz=90000001;
bool arr[sz];
vector<int> prime;

void seive()
{
	arr[0]=arr[1]=1;
	for(int i=2;i*i<=sz;i++)
	{
		if(!arr[i])
		{
			for(int j=i*i;j<sz;j+=i)
				arr[j]=1;
		}
	}
	for(int k=0;k<sz;k++)
	{
		if(!arr[k])
			prime.push_back(k);
	}
}

void mainhelper()
{
	int n;cin>>n;
	cout<<prime[n-1]<<endl;
}
int main()
{
	seive();
	int t;cin>>t;
	while(t--)
	{
		mainhelper();
	}
}
