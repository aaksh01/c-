#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*top=NULL;
void insert(int x)
{
    struct node *t;
    t=(struct node *)malloc(sizeof(struct node));
    t->data=x;
    t->next=NULL;
    if(top==NULL)
    {
        top=t;
    }
    else{
     t->next=top;
     top=t;
    }
}

void delet()
{
    struct node *q;
    q=top;
    top=top->next;
    free(q);
}
void display()
{
    struct node *p;
    p=top;
    while(p!=0)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}

int main()
{
    insert(10);
    insert(40);
    insert(90);
    insert(100);
    delet();
    delet();
    display();
    return 0;

}
