#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the no. of row and column of matrix:";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j==n-1-i)
            {
                cout<<'#';
            }
            else
                cout<<' ';
        }
        cout<<"\n";
    }

    return 0;
}
