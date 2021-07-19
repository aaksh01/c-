#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

void primefact(int n)
{
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			int cnt=0;
			while(n%i==0)
			{
				cnt++;
				n/=i;
			}
			cout<<i<<"^"<<cnt<<endl;
		}
	}
}

void mainhelper()
{
	int n;cin>>n;
	primefact(n);
}
int main()
{
	//int t;cin>>t;while(t--)
	mainhelper();

}
