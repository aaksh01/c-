#include<bits/stdc++.h>
using namespace std;
#define endl "\n"


int main()
{
	int t;cin>>t;while(t--)
	{
		int n;cin>>n;
		if(n==1)
		{
			int x;cin>>x;
			cout<<1<<endl;
		}
		else
		{
		int a[n+1]={0};
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n+1,greater<int>());
		int pref[n+2];
		int suff[n+2];
		pref[1]=a[1];
		for(int i=2;i<=n;i++)
		{
			pref[i]=__gcd(pref[i-1],a[i]);
		}
		suff[n]=a[n];
		for(int i=n-1;i>=1;i--)
		{
			suff[i]=__gcd(suff[i+1],a[i]);
		}

		int res=0;

		int p=-1;
		if(pref[n-1]>suff[2])
		{
			p=n;
			res=pref[n-1];
		}
		else
		{
			p=1;
			res=suff[2];
		}
		
		
		for(int i=2;i<n;i++)
		{
			int ans=__gcd(pref[i-1],suff[i+1]);
			if(res<ans)
			{
				res=ans;
				p=i;
			}
		}
		int cnt=0;
		int q=0;
		for(int i=1;i<=n;i++)
		{
			if(i==p)
			{
				cnt++;
			}
			else
			{
				q=a[i]/res;
				cnt+=q;
			}
		}
		cout<<cnt<<endl;
	}
	}
}