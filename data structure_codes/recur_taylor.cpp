#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

double e(int x, int n)
{
	static double p=1;
	static double f=1;
	if(n==0)
		return 1;
	else
	{
		double r=e(x,n-1);
		p*=x;
		f*=n;
		return r+p/f;
	}
}
void mainhelper()
{
	int x,n;cin>>x>>n;
	cout<<e(x,n);
}

int main()
{
	mainhelper();

}
