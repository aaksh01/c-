#include<bits/stdc++.h>
using namespace std;

//ios_base::sync_with_stdio(false);

#define ll long long int
#define vi vector<int>
int main()
{
    ios_base::sync_with_stdio(false);
    //vector<int> vi;
    int arr[]={1,2,3,3,2,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    set<int> s1;
    for(ll i=0;i<n;i++)
    {
        s1.insert(arr[i]);
    }
    set<int>::iterator itr;

    for(itr=s1.begin();itr!=s1.end();itr++)
        cout<< *itr<<" ";

    return 0;
}
