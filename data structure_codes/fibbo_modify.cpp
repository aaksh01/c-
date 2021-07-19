#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int ar[100001];
int fib(int n)
{
	if(n==0 || n==1)
		return n;
	if(ar[n]!=-1)
		return ar[n];
	return ar[n]=fib(n-1)+fib(n-2);
}
int main()
{
	int n;cin>>n;
	memset(ar,-1,sizeof(ar));	
	cout<<fib(n);

}
