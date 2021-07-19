#include<iostream>
using namespace std;

int migratoryBirds(int *arr,int n) {
    int c=0,d=0,e=0,f=0,g=0;

for(int i=0;i<n;i++)
{
    if(arr[i]==1)
    {
        c++;
    }
    else if(arr[i]==2)
    {
        d++;
    }
    else if(arr[i]==3)
    {

    e++;
    }
    else if(arr[i]==4)
   {
    f++;
   }
   else if(arr[i]==5)
   {
    g++;
   }
}
if(c<d&&c<e&&c<f&&c<g)
{
    return c;
}
else if(d<c&&d<e&&d<f&&d<g)
{
    return d;
}else if(e<c&&e<d&&e<f&&e<g)
{
    return e;
}else if(f<c&&f<d&&f<e&&f<g)
{
    return f;
}else if(g<c&&g<d&&g<e&&g<f)
{
    return g;

}
int main()
{int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int p=migratoryBirds(arr,n);
cout<<p;
return 0;
}
