#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
 
const int sz=100001;
int ar[sz];

 void seive()
 {
 	memset(ar,-1,sizeof(ar));
 	for(int i=2;i<sz;i++)
 	{
 		if(ar[i]==-1)
 		{
 			for(int j=i;j<sz;j+=i)
 			{
 				if(ar[j]==-1)
 				{
 					ar[j]=i;
 				}
 			}
 		}
 	}

 }

 void mainhelper()
 {
 	seive();
 	int n;cin>>n;
 	while(n>1)
 	{
 		cout<<ar[n]<<endl;
 		n/=ar[n];
 		
 	}
 }

 int main()
 {
 	int t;cin>>t;while(t--)
 	{
 		mainhelper();
 	}
 }