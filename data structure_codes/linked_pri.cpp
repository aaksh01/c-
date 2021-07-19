#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

struct node
{
	int data=0;
	struct node *next=NULL;
}*first, *last;
void create(int value)
{

	struct node *temp= new node;
	temp->data= value;

	if(first==NULL) //when linked list is empty
		{
			first=temp;
			last=temp;
		}
	else
	{
		last->next= temp;
		last = temp;
	}


}
void display()
{
	struct node *p= first;
	// cout<<p->data;
	while(p!=NULL)
	{
		cout<<(p->data)<<"->";
		p=p->next;
	}

}


int main()
{

	create(10);
	create(20);
	create(30);
	display();
}
