#include<bits/stdc++.h>
using namespace std;
int main()
{ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a.begin(),a.end());
            int ans=0;
        for(int w=2;w<=2*n;w++)
        {
            int i=0,j=n-1,c=0;
                while(i<j)
            {
                if(a[i]+a[j]==w)

                {
                    i++;
                    j--;
                    c++;
                }
        else if(a[i]+a[j]>w)
                {
                    j--;
                }
                else
                    i++;

            }
            ans=max(ans,c);
        }
        cout<<ans<<"\n";
    }
    return 0;
}
