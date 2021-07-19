#include<bits/stdc++.h>
#define endl "\n";
using namespace std;
int main()
{
	int n;cin>>n;
	if(n==1)
		cout<<"false"<<endl;
	for(int i=2;i<n;i++)
	{
		if((n%i)==0)
			cout<<"false"<<endl;
	}
	cout<<"true"<<endl;

}
