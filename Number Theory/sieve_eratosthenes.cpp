#include<bits/stdc++.h>
#define endl "\n"
using namespace std;



const int sz=1000002;
bool prime[sz];
void seive()
{
	memset(prime,1,sizeof(prime));
	prime[0]=prime[1]=0;
	for(int i=2;i*i<=sz;i++)
	{
		if(prime[i])
		{
			for(int j=i*i;j<sz;j+=i)
				prime[j]=0;
		}
	}
}



void mainhelper()
{
	int n;cin>>n;
	if(prime[n]==1)
		cout<<"YES";

	else cout<<"NO";

}

int main()
{
	seive();
	int t;cin>>t;while(t--){
		
		mainhelper();
	}
	
}
