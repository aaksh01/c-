#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    for(int i=m;i<=n;i++)
    {
        for(int j=i-1;j>1;j--)
        {
            if(i%j==0)
            {
                break;
            }
            else
            {
                cout<<i<<"\n";
            }
        }
    }
    return 0;

}
