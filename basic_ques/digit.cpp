#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int p,cnt=0;
    while(n!=0)
    {
        p=n%10;
        cout<<p<<endl;
        if(p!=0  &&  n%p==0)
            cnt++;

        n=n/10;
        cout<<n<<endl;
        p=0;
    }
    cout<<cnt<<endl;
    return 0;
}
