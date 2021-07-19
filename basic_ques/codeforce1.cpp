#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

void mainhelper()
{
		long long n;cin>>n;
		long long p=0;
		long long ans=0;
		if(n%2050==0)
		{
			 p=n/2050;
			string s=to_string(p);
			for(auto x:s)
				ans+=(x-'0');
			cout<<ans<<endl;
		}
		else{
			cout<<-1<<endl;
			}
	
}
int main()
{
	int t;cin>>t;while(t--)
	{
		mainhelper();
	}

}
