#include<iostream>
using namespace std;

void gradingStudents(int grades[],int n)
{
    for(int i=0;i<n;i++)
    {
        int round=(grades[i]/5+1)*5;


    if(grades[i]<40)

        cout<<grades[i];

     else if(round-grades[i]>3)
        cout<<grades[i];
    else
        cout<<round;
    }
}



int main()
{

    int n;
cin>>n;
int grades[n];
for(int i=0;i<n;i++)
{
    cin>>grades[i];
}
int p=gradingStudents(grades,n);
cout<<p;
return 0;}

