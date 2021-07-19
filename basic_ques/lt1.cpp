#include<bits/stdc++.h>
using namespace std;
int main()
{
long t;cin>>t;while(t--)
{
   int n;cin>>n;
   int arr[n];
   int cnt1=0,cnt2=0;
   for(int i=0;i<n;i++){
   	cin>>arr[i];
   if((arr[i]%2)!=0)
   			cnt1++;
   		else
   			cnt2++;
   	}
   	cout<<min(cnt1,cnt2)<<"\n";
}
return 0;
}
