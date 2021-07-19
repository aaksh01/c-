#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
	int n;cin>>n;
	string s;cin>>s;
	// map<int,char>m;
	// for(int i=0;i<s.size();i++)
	// {
	// 	// m[s[i]]++;
	// 	m.insert(make_pair(i,s[i]));
	// }
	// for(auto x:m)
	// {
	// 	cout<<x.first<<" "<<x.second<<endl;
	// }





	set<char>str;
	str.insert(s.begin(),s.end());
	cout<<str.size()<<endl;
	for(auto x:str)
	{
		cout<<x<<" "<<(char)x+1<<endl;
	}
}