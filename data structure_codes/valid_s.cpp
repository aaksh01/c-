#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int mainhelper()
{
	char *a;
	cin>>a;
	for(int i=0;a[i]!='\0';i++)
	{
		if(!(a[i]>=65 && a[i]<=90) && (!(a[i]>=97 && a[i]<=122))  && (!(a[i]>=48 && a[i]<=57)))
			return 0;
	}
	return 1;
}
int main()
{
	cout<<mainhelper();

}
