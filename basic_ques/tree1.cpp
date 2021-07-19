#include<bits/stdc++.h>
using namespace std;
int scndl(vector<int> arr)
{
     int scnd=arr[arr.size()-1];
    for(int i=arr.size()-2;i>=0;i--)
    if(arr[i]<arr[arr.size()-1])
       {scnd=arr[i];
           break;}

return scnd;}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
sort(arr.begin(),arr.end());
int cnt=0;
while(arr[0]!=0)
{
   int scnd=scndl(arr);

   if(scnd==arr[n-1])
   {
       cnt++;break;
   }


   if(scndl!=0)
    cnt++;

for(int i=0;i<arr.size();i++)
{
    if(arr[i]>scnd)
    arr[i]=scnd;
}
}
cout<<cnt<<"\n";

}

    return 0;

}

