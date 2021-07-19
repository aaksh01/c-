#include<bits/stdc++.h>
#define endl "\n"
#define tc long tt;cin>>tt;while(tt--)
using namespace std;

void str_ana(string s1,string s2)
{
	int n=s1.size();
	int m=s2.size();
	int h[26]={0};
	if(n!=m)
	{
		cout<<"Not anagram"<<endl;
		return;
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			h[s1[i]-97]++;
		}
		
		for(int i=0;i<n;i++)
		{
			h[s2[i]-97]-=1;
		}
		
		for(int i=0;i<n;i++)
		{
			if(h[s2[i]-97]!=0)
			{
				cout<<"not anagram"<<endl;
				return;
			}
		}
		cout<<"anagram"<<endl;
	}
	
}
int main()
{

tc{
	string s1,s2;
	cin>>s1>>s2;

	str_ana(s1,s2);
}

}
