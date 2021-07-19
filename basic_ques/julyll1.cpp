#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void anagram(string s)
{
	int cnt=0;
	int n=s.size();
		if(n%2!=0)
		{
			cout<<-1<<endl;
			return;
		}
		else
		{
			string s1=s.substr(0,n/2);
			string s2=s.substr(n/2);
			// cout<<s1<<" "<<s2;
			int m[26]={0};
			for(int i=0;i<s1.size();i++)
			{
				int a=s1[i]-97;
				m[a]=1;
			}
			for(int i=0;i<s2.size();i++)
			{
				int b=s2[i]-97;
				if(m[b])
				{
					m[b]=0;
				}
			}
			
			for(int i=0;i<26;i++)
			{
				if(m[i])
				{
					cnt++;
				}
			}
		}
		cout<<cnt<<endl;
}

int main()
{ 
	int q;cin>>q;while(q--)
	{
		string s;cin>>s;
		anagram(s);
	}
	
} 