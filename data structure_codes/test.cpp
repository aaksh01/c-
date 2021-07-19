#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
	int n;cin>>n;
	vector<string> arr(n);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	cout<<arr[1].size();
	for(int i=0;i<arr[1].size();i++)
	{
		cout<<arr[1][i]<<endl;
	}


}
