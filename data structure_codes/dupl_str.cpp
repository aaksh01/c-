#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

void duplicate(string s1)
{
	int h[26]={0},i;
	for(i=0;i<s1.length();i++)
	{
		h[s1[i]-97]++;
	}
	for(i=0;i<26;i++)
	{
		if(h[i])
		{
			char ch;
			ch=('a'+i);
			cout<<ch<<'\t'<<h[i]<<endl;
		}
	}
}
int main()
{
	string s1;
	cin>>s1;
	duplicate(s1);

}
