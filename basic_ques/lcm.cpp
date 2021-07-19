#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    return a;
}

int lcm(int a,int b)
{
    int hcf=gcd(a,b);
    int product=a*b;
    return product/hcf;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<lcm(a,b)<<endl;

    return 0;
}
