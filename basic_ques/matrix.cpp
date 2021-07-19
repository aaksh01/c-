#include<iostream>
using namespace std;
int main()
{
    int n,factors=1;
    cout<<"enter the no.: ";
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            /*cout<<"factors: "<<n/i<<" "<<endl;*/
            factors+=i;
        }
    }
            if(factors==n)
                cout<<"perfect";
                else
                cout<<"not a perfect";


    return 0;
}
