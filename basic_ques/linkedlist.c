#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*first=NULL,*last=NULL;

void insert(int x)
{
    struct node *t;
    t=(struct node *)malloc(sizeof(struct node));
    t->data=x;
    t->next=NULL;
    if(first==NULL){
        first=t;
        last=t;
        }
    else{
        last->next=t;
        last=t;}
}

void display()
{
    struct node *p;
    p=first;
    while(p)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}
void delet()
{
    struct node *p;
    p=first;
    first=p->next;
    free(p);
}

int main()
{
    insert(10);
    insert(20);
    insert(50);
    delet();
    delet();
display();

    return 0;
}

