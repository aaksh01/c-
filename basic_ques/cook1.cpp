#include<bits/stdc++.h>
using namespace std;
int main()
{
long t;cin>>t;while(t--)
{
	int n,x;cin>>n>>x;
	vector<int> arr;
	for(int i=0;i<arr.size();i++)
		cin>>arr[i];
	for(int i=0;i<arr.size();i++)
		cout<<arr[i];
	set<int> s;
	s.insert(arr.begin(),arr.end());
	int m=s.size();
	cout<<m;

}

}
