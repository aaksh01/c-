#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
void reverse(char a[])
{
	int i=0,j=0;
	while(a[j]!='\0')
	{
		j++;
	}
	cout<<j;
	for( i=0;a[i]!='\0' && i<j;i++,j--)
	{
		char temp= a[i];
		a[i]=a[j];
		a[j]= temp;
	}

	for(int k=0;a[k]!='\0';k++)
	{
		cout<<a[k];
	}
}

void palindrom(string s1)
{
	int i=0,j=s1.length()-1;

	for(i,j;i<j;i++,j--)
	{
		if(s1[i]!=s1[j])
		{
			cout<<"String is not palindrom"<<endl;
			return;
		}
		else
		{
			continue;
		}
	}
	cout<<"String is palindrom"<<endl;
	return;
}

void com_string(string &s1,string &s2)
{
	if(s1!=s2)
	{
		cout<<"NOT EQUAL!\n";
		return;
	}
	cout<<"EQUAL!\n";

}
int main()
{
	string s1;
	cin>>s1;
	palindrom(s1);
}
