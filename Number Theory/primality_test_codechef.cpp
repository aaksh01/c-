#define endl "\n";
using namespace std;
void mainhelper()
{
	int n;cin>>n;
		if(n==1)
		{
			cout<<"no"<<endl;
			return;
		}
		for(int i=2;i*i<=n;i++)
		{
			if(n%i==0)
			{
				cout<<"no"<<endl;
				return;
			}
		}
		cout<<"yes"<<endl;
}
int main()
{
	int t;cin>>t;
	while(t--)
	{
		mainhelper();
	}
}