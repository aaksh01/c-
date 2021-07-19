#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r1,c1,c2;


    cout<<"enter the value of row and column of 1st matrix:";
    cin>>r1>>c1;
      int a[r1][c1];
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"enter the row and column of 2nd matrix:";
    cin>>c2;
    int b[c1][c2];
    int c[r1][c2];
    for(int i=0;i<c1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cin>>b[i][j];
        }
    }
     for(int i=0;i<c1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
   for(int i=0;i<c1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            c[i][j]=0;
                int temp;
             /*   if(r1>c2)
                    temp=r1;
                else
                    temp=c2;*/
            for(int k=0;k<c1;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
            cout<<c[i][j]<<" ";
        }
        cout<<"\n";
    }

return 0;
}

