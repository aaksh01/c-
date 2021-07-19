#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

void taugle()
{
	char name[]="akash KUMAR";
	for(int i=0;name[i]!='\0';i++)
	{
		if(name[i]>=65 && name[i]<=90)
			name[i]+=32;
		else if(name[i]>=97 && name[i]<=122)
			name[i]-=32;
	}
	for(auto x:name)
		cout<<x;
}

void mainhelper()
{
	char name[]="AKASH";
	for(int i=0;name[i]!='\0';i++)
	{
		name[i]=name[i]+32;
	}
	for(auto &x:name)
		cout<<x;
}
int main()
{
	mainhelper();
	taugle();
}
