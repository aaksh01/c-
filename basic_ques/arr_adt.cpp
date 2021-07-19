#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

struct arry
{
	int a[20];
	int size;
	int length;
};
void displ(struct arry arr[])
{
	
		for(int i=0;i<20;i++)
			cout<<arr->a[i]<<" ";
			
		
}
int main()
{
	 struct arry arr[]={{1,1,2,12,10,5},20,6};
	displ(arr);
	
}
