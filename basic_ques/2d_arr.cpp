#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

void mainhelper()
{
	int *arr[3];
	arr[0]=new int[3];
	arr[1]=new int[3];
	arr[2]=new int[3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

}
int main()
{
	mainhelper();

}
