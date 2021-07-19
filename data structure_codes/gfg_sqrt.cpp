#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int countSquares(int N) {
        // code here
        int cnt=0;
        for(int i=1;i<N;i++)
        {
            long p=sqrt(i);
            if((p*p)==i)
            {
                cnt++;
            }
        }
        return cnt;
    }
int main()
{
	int N;cin>>N;
	cout<<countSquares(N);

}
