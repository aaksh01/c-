#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cout<<"enter the value of row: ";
    cin>>row;
    cout<<endl;
    cout<<"enter the value of col: ";
    cin>>col;
    int n;

    cout<<"enter the element of 1st matrix:";

    int a[][];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>n;
            cin>>a[i][j];
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
