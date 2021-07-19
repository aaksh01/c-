#include<iostream>
using namespace std;
int main()
{
    int m,n;
    int flag;
    cin>>m>>n;
    for(int i=m;i<=n;i++)
    {
        flag=0;
        for(int j=i-1;j>1;j--)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
            else
            {
                continue;

            }

        }
        if(flag==0)
                 cout<<i<<" ";

    }
    return 0;

}

