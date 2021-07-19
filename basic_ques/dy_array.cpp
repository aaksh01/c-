#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

void mainhelper()
{
	int *p;
	int *q;
	//p=new int[5];
	p=(int *)malloc(5*sizeof(int));
	//q=new int[10];
	q=(int *)malloc(10*sizeof(int));
	p[0]=1;
	p[1]=2;
	p[2]=12;
	p[3]=5;
	p[4]=32;

	for(int i=0;i<10;i++)
		q[i]=p[i];
	// for(int i=0;i<5;i++)
	// 	{
	// 		cout<<p[i]<<" ";
	// 	}
	delete []p;
	p=q;
	q=NULL;
	cout<<endl;
	for(int i=0;i<5;i++)
		cout<<p[i]<<" ";
}
int main()
{

	mainhelper();
}
