#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

void makingAnagrams(string s1, string s2) {
    int arr1[26]={0};
    int arr2[26]={0};
    int cnt=0;
    for(int i=0;i<s1.size();i++)
    {
        int c1=s1[i]-97;
        arr1[c1]++;
    }
    for(int i=0;i<26;i++)
    {
    	cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<s2.size();i++)
    {
        int c2=s2[i]-97;
        arr2[c2]++;
    }
    for(int i=0;i<26;i++)
    {
    	cout<<arr2[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<26;i++)
    {
        if(arr1[i]!=arr2[i])
        {
            cnt+=abs(arr1[i]-arr2[i]);
        }
        cout<<cnt<<" ";
    }
    
    // return cnt;

}

int main()
{
	string s1,s2;
	cin>>s1>>s2;
	makingAnagrams(s1,s2);

}						