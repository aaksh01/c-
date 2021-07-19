#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int maxim_xor(int l,int r)
{
	int mini=0;
    for(int i=l;i<=r;i++)
    {
    	for(int j=i;j<=r;j++)
    	{
        	int p=l;
        	int n=0;
        	n=i^j;
       		 if(n>mini)
       	 		{
            		mini=n;
        		}
    	}
    }
   		 return mini;

}

int main()
{
	int l,r;cin>>l>>r;
	cout<<maxim_xor(l,r)<<endl;
}
