#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

struct arry
{
	int a[20];
	int size;
	int length;
};

void disp(struct arry arr[])
{
	for(int i=0;i<arr->length;i++)
		cout<<arr->a[i];
}



int main()
{
	struct arry arr[]={{1,2,3,4,5,6},20,6};
	disp(arr);

}
