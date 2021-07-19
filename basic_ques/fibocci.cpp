#include<iostream>

using namespace std;

long long fib(int n)
{
    long long f[n];
    f[0]=0;
    f[1]=1;

    for(long long i=2;i<=n;i++)
    {
        f[i]=(f[i-1]+f[i-2])%10;
    }
    return f[n];
}
int main()
{
    int n;cin>>n;
    cout<<fib(n);

    return 0;
}
