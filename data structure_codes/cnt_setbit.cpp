#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
	int cnt=0;
	int n;cin>>n;
	while(n>=2)
		{
			int b=0;
			b=n%2;
			if(b==0)
			{
				cnt++;
			}
			// cout<<cnt<<endl;
			n=n/2;
			// cout<<n<<endl;
		}
	cout<<cnt<<endl;
	int ans=0;
	ans=pow(2,cnt);
	cout<<ans<<endl;
}
