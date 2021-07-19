#include<bits/stdc++.h>
using namespace std;

auto  gradingStudents(int ar[],int n)
{
    for(int i=0;i<n;i++)
    {
        int p=ar[i]/5;
        int q=(p+1)*5;
        if((ar[i]-q)<3)
            ar[i]=q;
    }
    return ar;
}

int main()
{
    int n;cin>>n;
    int ar[n];

    for(int i=0;i<n;i++)
        cin>>ar[i];
   cout<<gradingStudents(ar,n);

   return 0;

}
