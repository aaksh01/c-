#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int p,cnt=0;
    int x=n;
    while(x!=0)
    {
        p=x%10;
        cout<<p<<endl;
        if(p!=0  &&  n%p==0)
            cnt++;
        cout<<cnt<<endl;
        x=x/10;
        cout<<x<<endl;
        p=0;
    }
    cout<<cnt<<endl;
    return 0;
}

