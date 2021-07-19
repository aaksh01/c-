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
int checkloop_ll()
 {
 	struct node *p,*q;
 	p=q=first;
 	do{
 		p=p->next;
 		q=q->next;
 		if(q!=NULL)
 		{
 			q=q->next;
 		}
 		else
 		{
 			q=NULL;
 		}
 	}
 	while(p && q);
	if(p==q)
	{
		return 1;
	}
	else
	{
		return 0;
	}

 	
 }

int main()
{

	create(10);
	create(20);
	create(30);
	display();
	cout<<endl;
	int p=checkloop_ll();
	cout<<p;
}
