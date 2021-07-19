#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

void mainhelper()
{	
	int a,n;cin>>a>>n;
	int res=1;
	while(n)
	{
		if(n%2)
		{
			res*=a;
			n--;
		}
		else
		{
			a*=a;
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
