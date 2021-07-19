#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;cin>>t;while(t--)
{
	int n,sum=0;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
	if(sum&1)
		cout<<2<<"\n";
	else
		cout<<1<<"\n";

}

}