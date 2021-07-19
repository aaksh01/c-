#include<iostream>
using namespace std;
int main()
{
    int row1,col1;
    cout<<"enter the no. of row and columns of 1st matrix: ";
    cin>>row1>>col1;
    int matrix1[row1][col1];

    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            cout<<"enter the element for "<<"("<<i+1<<","<<j+1<<")";
            cin>>matrix1[i][j];
        }
    }
    cout<<"the matrix entered is: \n";
     for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            //cout<<"enter element for ("<<i+1<<","<<j+1<<")"<<endl;
            cout<<matrix1[i][j]<<"  ";
        }
        cout<<endl;
    }
    int row2,col2;
    cout<<"enter the row and columns of 2nd matrix: ";
    cin>>row2>>col2;
    int matrix2[row2][col2];
    for(int i=0;i<row2;i++)
    {
        for(int j=0;j<col2;j++)
        {
            cout<<"enter the element for "<<"("<<i+1<<","<<j+1<<")";
            cin>>matrix2[i][j];
        }
    }
    for(int i=0;i<row2;i++)
    {
        for(int j=0;j<col2;j++)
        {
            //cout<<"enter the element for "<<"("<<i+1<<","<<j+1<<")";
            cout<<matrix2[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<"matrix after adding: "<<endl;
    int c[row1][col1];
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            c[i][j]=matrix1[i][j]-matrix2[i][j];
        }
    }
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;

}
