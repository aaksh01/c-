#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

struct node
{
	int data=0;
	struct node *next=NULL;
}*first,*last,*first1,*last1,*third;

void create1(int value)
{
	struct node *temp=new node;
	temp->data=value;
	if(first==NULL)
	{
		first=temp;
		last=temp;
	}
	else
	{
		last->next=temp;
		last = temp;
	}
}

void create2(int value1)
{
	struct node *temp1=new node;
	temp1->data=value1;
	if(first1==NULL)
	{
		first1=temp1;
		last1=temp1;
	}
	else{
		last1->next=temp1;
		last1=temp1;
	}
}

void concatll()
{
	last->next=first1;
	last=NULL;
	first1=NULL;
}

void display(struct node *p)
{
	// struct node *p;
	// p=first;
	if(p==NULL)
	{
		return;
	}
	else
	{
		cout<<(p->data)<<"->";
		display(p->next);
		// p=p->next;
	}
}

void rm_duplill()
{
	struct node *p,*q;
	p=first;
	q=first->next;
	while(q!=NULL)
	{
		if((q->data)!=(p->data))
		{
			p=q;
			q=q->next;
		}
		else
		{
			p->next=q->next;
			q=NULL;
			delete(q);
			q=p->next;
		}

	}
}

void revll()
{
	if(first->next==NULL || first==NULL)return;
	struct node *p,*q,*r;
	p=first;
	q=p->next;
	r=q->next;
	first->next=NULL;
	last=first;
	while(r!=NULL)
	{
		q->next=p;
		p=q;
		q=r;
		r=r->next;
	}
	
	q->next=p;
	first=q;
}

node * mergll()
{
	struct node *third,*l;
	
	if((first->data)<(first1->data))
		{
			third=l=first;
			first=first->next;
			l->next=NULL;


		}
		else
		{
				(third=l=first1);
				first1=first1->next;
				l->next=NULL;
			}
	while(first!=NULL && first1!=NULL)
	{
		if((first->data)<(first1->data))
		{
			l->next=first;
			l=first;
			first=first->next;
			l->next=NULL;
		}
		else
		{
			l->next=first1;
			l=first1;
			first1=first1->next;
			l->next=NULL;
		}
	}

		if(first!=NULL)
		{
			l->next=first;
		}
		else
		{
			l->next=first1;
		}
		return third;
}
int main()
{
	create1(1);
	create1(2);
	create1(13);
	display(first);
	create2(4);
	create2(5);
	create2(42);
	create2(42);
	// display(first);
	
	// rm_duplill();
	cout<<endl;
	display(first1);
	cout<<endl;
	// concatll();
	node *third=mergll();
	// revll();

	display(third);

}
