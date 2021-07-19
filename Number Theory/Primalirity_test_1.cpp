#include<bits/stdc++.h>
#define endl "\n";
using namespace std;
void mainhelper()
{
	int n;cin>>n;
	if(n==1)
		{cout<<"false"<<endl;return;}
	for(int i=2;i<n;i++)
	{
		if((n%i)==0)
			{cout<<"false"<<endl;return;}
	}
	cout<<"true"<<endl;

}


int main()
{
	
  mainhelper();

}
