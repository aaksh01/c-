#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

// int x=1;

int fun(int n)
{
	static int x=1;
	if(n>0)
	{
		x++;
		cout<<"while entering: "<<x<<endl;
		return fun(n-1)+x;

		cout<<"while returning x: "<<x<<endl;
	}
	return 0;
}

int main()
{
	int n;cin>>n;
	int a=1;
	cout<<fun(n);

}
