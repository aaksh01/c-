#include<bits/stdc++.h>

using namespace std;

int main()
{
    int r;cin>>r;

    if(r>=20 && r<=30)
    {
        float area;
        area=3.14159090*r*r;
        printf("%0.2f",area);

    }
    else
        printf("wrong input");

    return 0;
}
