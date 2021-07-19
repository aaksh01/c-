#include<bits/stdc++.h>
#define endl '\n';
using namespace std;

struct node{
	int data=0;
	struct node *next=NULL;
}*head;

void insert(int value)
{
	struct node *t=new node;
	t->data=value;
	// t->next=NULL;
	struct node *p;
	if(head==NULL)
	{
		head=t;
		p=head;
		t->next=head;
	}
	else
	{
		while((p->next)!=head)
		{
			p=p->next;
		}
		p->next=NULL;
		p->next=t;
		t->next=head;
	}

}

void display()
{
	struct node *q;
	q=head;
	do
	{
		cout<<(q->data)<<"->";
		q=q->next;
	}while((q->next)!=head);
}
int main()
{
	insert(25);
	insert(35);
	insert(45);
	insert(55);
	display();

}