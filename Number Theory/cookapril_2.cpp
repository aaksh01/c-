#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

// void converttoset(vector<int> &ar)
// 	{
		
// 	}

void mainhelper()
{
		int x,n;cin>>x>>n;
		vector<int> ar(x);
		for(auto &x:ar)
		{
			cin>>x;
		}
		int m=ar.size();
		set<int> s(ar.begin(),ar.end());
			
		// for(auto it=s.begin();it!=s.end();++it)
		// 	cout<<*it<<" ";
		// cout<<endl;
		int p=s.size();
		//cout<<p<<endl;
		int a=(m-n);
		cout<<min(p,a)<<endl;

}
int main()
{
	int t;cin>>t;while(t--)
	{
		mainhelper();
	}
}
