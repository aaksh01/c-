#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j;
    cin>>i>>j;

    int cnt=0;
    int rev=0;
    for(int m=i;m<=j;m++)
    {
        int l=m;
        while(l>0){
        rev=(rev*10)+l%10;
        l=l/10;}
        cout<<rev<<endl;
        rev=0;
    }
    return 0;
    }
