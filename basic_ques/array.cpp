#include<iostream>
using namespace std;
int main()
{
    int n;

    cout<<"enter the value of n:";
    cin>>n;
    int arr[n],key=arr[0];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int j=0;j<n;j++)
    {
        if(key<arr[j])
        {
            key=arr[j];
        }
    }

    cout<<key;


    return 0;
}
