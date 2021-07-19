#include<stdio.h>
int x=0;
int fun(int n)
{


    if(n>0)
    {
        x++;
        return fun(n-1)+x;
    }
    return 0;
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
    int p=3;
	int r=5;
    printf("%d\n",fun(p));
	
     printf("%d ",fun(r));

return 0;
}
