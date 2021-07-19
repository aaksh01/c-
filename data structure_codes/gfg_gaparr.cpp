#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int search(int a[],int k,int x,int n)
{
	int i=0;
	while(i<n)
	{
		if(a[i]==x)
			return i;
		i=i+max(1,abs(a[i]-x)/k);
	}
	return -1;
}
int main()
{
	int a[]={20,40,50,70,70,60};
	int k,x;cin>>k>>x;
	int n=sizeof(a)/sizeof(a[0]);
	cout<<search(a,k,x,n);

}
