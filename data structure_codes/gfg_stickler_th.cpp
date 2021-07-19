#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int FindMaxSum(int arr[], int n)
    {
        // Your code here
        if(n==1)
        {
            return arr[0];
        }
        int sum1=0;int sum2=0;
        for(int i=0;i<n;i+=2)
        {
            sum1+=arr[i];
        }
        for(int i=1;i<=n;i+=2)
        {
            sum2+=arr[i];
        }
        if(sum1>sum2)
        {
            return sum1;
        }
        else
        {
            return sum2;
        }
    }
int main()
{
	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<FindMaxSum(arr,n);


}
