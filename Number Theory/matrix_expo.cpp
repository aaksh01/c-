#include<bits/stdc++.h>
#define endl "\n"
#define N 60
#define int long long
#define mod 1000000007
using namespace std;

int ar[N][N];
int I[N][N];

void mul(int a[][N],int I[][N],int dim)
{
	int res[dim+1][dim+1];
	for(int i=0;i<dim;i++)
	{
		for(int j=0;j<dim;j++)
		{
			res[i][j]=0;
			for(int k=0;k<dim;k++)
			{
				res[i][j]= (res[i][j]%mod+(I[i][k]*a[k][j])%mod)%mod;
			}
		}
	}
	for(int i=0;i<dim;i++)
	{
		for(int j=0;j<dim;j++)
		{
			I[i][j]=res[i][j]%mod;
		}
	}
}

void power(int dim,int n)
	{
		for(int i=0;i<dim;i++)
		{
			for(int j=0;j<dim;j++)
			{
				if(i==j)
					I[i][j]=1;
				else
					I[i][j]=0;
			}
		}
		// for(int i=1;i<=n;i++)
		// {
		// 	mul(ar,I,dim);
		// }
		while(n)
		{
			if(n%2)
			{
				mul(ar,I,dim);
				n--;
			}
			else
			{
				mul(ar,ar,dim);
				n/=2;
			}
		}

	}

void mainhelper()
{
	int dim,n;cin>>dim>>n;
	for(int i=0;i<dim;i++)
	{
		for(int j=0;j<dim;j++)
		{
			cin>>ar[i][j];
		}
	}
	
	power(dim,n);

	for(int i=0;i<dim;i++)
	{
		for(int j=0;j<dim;j++)
		{
			cout<<I[i][j]%mod<<" ";
		}
		cout<<endl;
	}
}	
int32_t main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;cin>>t;while(t--)
	{
		mainhelper();
	}
}
