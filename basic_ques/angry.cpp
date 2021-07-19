#include<bits/stdc++.h>
using namespace std;

int*  gradingStudents(int *ar,int n)
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
   int* ptr=gradingStudents(ar,n);
   cout<<ptr<<"\n";

   return 0;

}
