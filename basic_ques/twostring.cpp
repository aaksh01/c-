#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

// void twocharacter(string s, int n)
// {
//     int a[26];
//     for(int i=0;i<26;i++)
//     {
//         a[i]=1;
//     }
//     for(int i=0;i<(s.size()-1);i++)
//     {
//         int last_char=s[i];
//         int p=s[i]-'97';
//         a[p]=0;
//         if(s[i+1]==last_char)
//         {
//             a[p]=1;
//         }
//     }
//     for(int i=0;i<26;i++)
//     {
//         cout<<a[i]<<endl;
//     }
// }

int main()
{
    int n;cin>>n;
    string s;cin>>s;
    // twocharacter(s,n);
    int a[26];
    for(int i=0;i<26;i++)
    {
        a[i]=1;
    }
    // cout<<a[5]<<endl;
    for(int i=0;i<(s.size()-1);i++)
    {
        int last_char=s[i];
        int p=s[i]-97;
        // cout<<p<<endl;
        a[p]=0;
        if(s[i+1]==last_char)
        {
            a[p]=1;
        }
    }
    int cnt=0;
    for(int i=0;i<26;i++)
    {
        if(a[i]==0)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
