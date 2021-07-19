#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int fib(int n)
{
	int t0=0;int t1=1;
	int t2=0;
	if(n<=1)
		return n;
	else
	{
		for(int i=2;i<=n;i++)
		{
			t2=t0+t1;
			t0=t1;
			t1=t2;
		}
		return t2;
	}
}
int main()
{
	cout<<fib(8);

}
