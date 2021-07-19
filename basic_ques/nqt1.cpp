#include<iostream>
#include<iomanip>
using namespace std;

void solve(int N,int q,double arr[])
{
    double t;
    if(N>0 && N<21){
    t=q*arr[N-1];
    cout<< fixed << setprecision(2) <<t<<"\n";}

    else
        cout<<"INVALID INPUT"<<"\n";


}

int main()
{
    double arr[21]={180.0,200.0,40.0,160.0,70.0,170.0,60.0,120.0,100.0,110.0,130.0,140.0,150.0,30.0,50.0,80.0,90.0,20.0,10.0,210.0};
    int N,q;
    char x,y,n;
    bool flag=1;

    while(flag)
    {
        cin>>N;cin>>q;
        solve(N,q,arr);

        cin>>x;
        if(x==y){
            solve(N,q,arr);continue;}
        else if(x==n)
            break;
    }

return 0;
}

