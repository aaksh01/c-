#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
      //char ar[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p'};
    map<int, char>m;
    m[0] = 'a';
	m[1] = 'b';
    m[2] = 'c';
	m[3] = 'd';
	m[4] = 'e';
	m[5] = 'f';
	m[6] = 'g';
	m[7] = 'h';
	m[8] = 'i';
	m[9] = 'j';
	m[10] = 'k';
	m[11] = 'l';
	m[12] = 'm';
	m[13] = 'n';
	m[14] = 'o';
	m[15] = 'p';
    while(t--)
    {

        int n;
        cin>>n;
        string s;
        for(int i=0;i<n;i++)
            cin>>s;
        for(int i=0;i<n;i+=4)
        {
            string temp = s.substr(i,i+3);
            int value = stoi(temp, nullptr, 2);
            auto it = m.find(value);
            cout<<it->second;
        }
    }

    return 0;
}

