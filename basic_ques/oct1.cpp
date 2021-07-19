#include<iostream>
using namespace std;

int main()
{
    int t;cin>>t;

    int flag=1;

    while(t--)
    {
        int n,k,x,y;
        cin>>n>>k>>x>>y;

        int i=1;
        int a=n/k;
        while(i<=a)
        {
            int p=0;
            p=x+i*k;
            if(p<n)
            {
                if(p==y){
                    cout<<"YES"<<"\n";
                        flag=0;
                        break;}
                else
                    i++;
            }
            else
            {
                p=p-n;
                if(p==y){
                    cout<<"YES"<<"\n";
                        flag=0;
                        break;}
                else
                    i++;

            }
        }
    if(flag==1)
        cout<<"NO"<<"\n";
    }
}
