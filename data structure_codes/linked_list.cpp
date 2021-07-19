#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

struct node
{
	int data=0;
	struct node *next=NULL;
}*first,*last,*first1,*last1;

void create(int value)
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
		last=temp;
	}

}

void display()
{

	struct node *p=first;
	// if(p==NULL)
	// 	return;
	// else
	// {
		
	// 	display(p->next);
	// 	cout<<(p->data)<<"->";
	// }
	while(p!=NULL)
	{
		cout<<(p->data)<<"->";
		p=p->next;
	}
	
}

int ccount()
{
	struct node *p=first;
	int c=0;
		while(p!=NULL)
		{
			c++;
			p=p->next;
			
		}
		return c;
	// if(p!=NULL)
	// {
	// 	return ccount(p->next)+1;
	// }
	// return 0;
}
 
int mmax(struct node *x)
{
	static int max=0;
	if(x==NULL)
		return 0;
	else
	{
		while(x!=NULL)
		{
			if((x->data)>max)
			{
				max=(x->data);
				x=x->next;
			}
		}
		return max;
	}
}

void search(struct node *x,int value)
{

	if(x==NULL)
		return;
	else
	{
		while(x!=NULL)
		{
			if((x->data)==value)
			{
				cout<<"element is present"<<endl;
				return;
			}
			else
			{
				x=x->next;
			}
		}
		cout<<"element is not present"<<endl;
	}
}
int add(struct node *x)
{

	static int sum;
	// base case:
	// if(x==NULL)
	// 	return 0;
	// sum+=(x->data);
	// add(x->next);	
	// return sum;
	if(x==NULL)
		return 0;
	else
	{
		while(x!=NULL)
		{
			sum+=x->data;
			x=x->next;
		}
		return sum;
	}
}

void insert(int pos,int x)
{
	pos--;
	int nodecnt=ccount();
	if(pos<0 || pos>nodecnt){
		cout<<"INValid position\n";
		return;
	}
	struct node *p=first;
	struct node *t=new node;
	t->data=x;
	if(pos==0)
	{
		t->next=first;
		first=t;
	}
	else if(pos>0)
	{
		// p=first;
		for(int i=0;i<pos-1;i++)
			p=p->next;
		t->next=p->next;
		p->next=t;
	}
if(nodecnt==0 || nodecnt==pos)
{
	last=t;
}

}

void insert_last(int x)
{
	struct node *t=new node;
	t->data=x;
	t->next=NULL;
	if(first==NULL)
	{
		first=last=t;
	}
	else
	{
		last->next=t;
		last=t;
	}
}

void insert_sortedll(int x)
{
	struct node *t=new node;
	t->data = x;
	if(first==NULL)
	{
		first=last=t;
		return;
	}
	if((first->data)>=x)
	{
		t->next=first;
		first=t;
		return;
	}

	struct node *q=first;
	// cout<<(q->data)<<endl;
	while(  ((q->next)!=NULL) &&(q->next->data)<x )
	{
		q=q->next;
	}
	t->next = q->next;
	q->next = t;
	if(t->next==NULL) // t is last node
		last=t;


}

void deletell(int pos)
{
	int total_node=ccount();
	
	if(pos<1 || pos>total_node)
	{
		cout<<"\nInvalid positon"<<endl;
		return;
	}
	struct node *q,*p;
	if(pos==1)
	{
		q=first;
		first=first->next;
		delete(q);
		return;
	}

	q=first;
	int cnt=0;
	// q->next=first;
	while(cnt<(pos-2))
	{
		q=q->next;
		cnt++;
	}
	p=q->next;
	q->next=p->next;
	p->next=NULL;
	if((q->next)==NULL)
	{
		last=q;
	}

		delete(p);
}

void check_sortedll()
{
	struct node *p;
	 p=first;
	 if(first==NULL)
	 {
	 	cout<<"Empty Linked List"<<endl;
	 	return;
	 }
	 while((p->next)!=NULL)
	 {
	 	if((p->data)>(p->next->data))
	 	{
	 		cout<<"Unsorted Linked List"<<endl;
	 		return;
	 	}
	 	p=p->next;
	 }
	 cout<<"Sorted Linked List"<<endl;
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

int main()
{
	// ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	// create(20);
	// create(30);
	// create(40);
	// int ans=ccount(); 
	// cout<<"no. of nodes= "<<ans<<endl;
	// int res= add(first);
	// cout<<res<<endl;
	// cout<<mmax(first)<<endl;
	// int value;cin>>value;
	// search(first,value);
	// int pos,x;cin>>pos>>x;
	insert(1,10);
	insert(2,20);
	insert(3,30);
	insert(4,40);
	insert(5,50);
	// insert_last(100);
	// insert_last(200);
	// insert_sortedll(5);
	// insert_sortedll(25);
	// insert_sortedll(11);
	// insert_sortedll(15);
	// insert_sortedll(515);
	// cout<<ccount()<<endl;
    // cout<<first->data<<"  "<<last->data<<endl;
    display();
	// deletell(8);
    cout<<endl;
    // check_sortedll();
    // rm_duplill();
    display();
    display(first1);
	cout<<endl;
	concatll();
	// revll();
	display(first);

}

