#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

void mainhelper()
{
	string a;
	getline(cin,a);
	int cvowel=0,ccons=0;
	for(int i=0;a[i]!='\0';i++)
	{
		if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
			cvowel++;
		else if((a[i]>65 && a[i]<=90) || (a[i]>97 && a[i]<=122))
			ccons++;
	}
	cout<<cvowel<<endl;
	cout<<ccons<<endl;
}
int main()
{
	mainhelper();

}
