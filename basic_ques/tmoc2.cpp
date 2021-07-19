#include<bits/stdc++.h>
using namespace std;
int main()
{
    int z;
    cin>>z;
    char bri[z],gro[z];
    for(int r=0;r<z;r++)
        cin>>r;
    for(int r=0;r<z;r++)
        cin>>r;
    vector<char> bride,groom;
    for(int r=0;r<z;r++)
        bride.push_back(r);
    for(int r=0;r<z;r++)
        groom.push_back(r);
int i=0,j=0,l=0;
        while(!bride.empty()  &&  l<z)
        {
            if(bride[i]==groom[j])
            {
                bride.erase(bride.begin());groom.erase(groom.begin());l=0;
            }
            else
            {
                groom.push_back(groom[j]);groom.erase(groom.begin());l++;
            }
        }
        cout<<(int)bride.size();
    return 0;
}
