#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
	string  s="akash kumar";
	map<char,int> m;
	for(int i=0;i<s.length();i++)
	{
		m[s[i]]++;
	}
	for(auto x:m)
	{
		if(x.second>1)
		cout<<x.first<<" "<<x.second<<endl;
	}


}
