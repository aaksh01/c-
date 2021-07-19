#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

void mainhelper()
{	
	int a,n,p;cin>>a>>n>>p;
	int res=1;
	while(n)
	{
		if(n%2)
		{
			res=(res*a)%p;
			n--;
		}
		else
		{
			a=(a*a)%p;
			n/=2;
		}
	}
	cout<<res;
}
int main()
{
	// int t;cin>>t;while(t--)
	mainhelper();

}
