#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        double k1,k2,k3,v;
        scanf("%lf %lf %lf %lf", &k1,&k2,&k3,&v);

        double fac;
        fac=k1*k2*k3*v;
        //cout<<fac<<"\n";

        double fin;
        fin=100/fac;
        //cout<<fin<<"\n";

        double value= (int) (fin * 100 + .5);
        double fvalue=value/100;
       // printf("%0.2lf \n",fvalue);

        if(fvalue<9.58)
            cout<<"yes"<<"\n";
        else
            cout<<"no"<<"\n";

    }
}
