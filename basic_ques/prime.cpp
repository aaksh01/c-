#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,r;
    vector<int> numb;
    cout<<"enter the no.:";
    cin>>n;
    while(n>0)
    {
        r=n%10;
        numb.push_back(r);

    n=n/10;
    }
       for(int i=numb.size()-1;i>=0;i--)cout<<numb[i]<<"   ";

    return 0;
}
