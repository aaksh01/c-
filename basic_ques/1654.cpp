#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
vector<int> permut(vector<int> arr, vector<int> perm, int k, int i, int n)
{
 if(perm.size()==k)
   return perm;
 for(int j=i;j<n;j++)
 {
   perm.push_back(arr[j]);
   permut(arr,perm,k,j,n);

     perm.pop_back();
   while(j<n-1 && arr[j] == arr[j+1]) j++;
 }
return perm;
}

int32_t main()
{int l,h,k,ans=0;
  cin>>l>>h>>k;
  int n=h-l+1;
vector<int> perm,arr;
for(int i=l;i<=h;i++) arr.push_back(i);
perm=permut(arr,perm,k,0,n);
int sum=0;
 sum=accumulate(perm.begin(),perm.end(),0);
 while(sum)
 {
 if(sum%2==0)
 ans=ans%mod+1;
 sum=0;
 }
 cout<<ans;
return 0;
}


