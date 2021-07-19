#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
	int a,b,c;cin>>a>>b>>c;
	vector<int> t;
	t.push_back(a);
	t.push_back(b);
	t.push_back(c);
	sort(t.begin(),t.end());
	cout<<t[1];


}
