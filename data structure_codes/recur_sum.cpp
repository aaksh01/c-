#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int sum(int n)
{
	if(n>0)
		return sum(n-1)+n;
	else
		return 0;
}
int main()
{
	int n;cin>>n;
	cout<<sum(n);

}