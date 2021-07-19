#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
bool rotation(string s1,string s2)
{
	string temp=s1+s1;
	cout<<temp<<endl;

	int p=temp.find(s2);
	cout<<p<<endl;
	if(p!=string::npos)
		// cout<<"True"<<endl;
		return 1;
	else
		// cout<<"False"<<endl;
		return 0;
}

bool rotationsubstr(string s1,string s2)
{
	string temp=s1+s1;
	int x=s2.size();
	for(int i=0;i+x<temp.size();i++)
	{
		string final;
		final=temp.substr(i,(x+i));
		// cout<<final<<endl;
		if(final==s2)
			return 1;

	}
	return 0;

}
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	// cout<<rotation(s1,s2);
	cout<<rotationsubstr(s1,s2)<<endl;
}
