#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int top;
    int size;
    int *s;

};
void creat(struct stack *st)
{
    printf("enter the size of stack: ");
    scanf("%d",&st->size);
    st->top=-1;
    st->s=(int *)malloc(st->size*sizeof(int));
}

void display(struct stack st)
{
    int i;
    for(i=st.top;i>=0;i--)
        printf("%d  ",st.s[i]);
}

void push(struct stack *st,int x)
{
    if(st->top==st->size-1)
        printf("stack is full");
    else
    {
        st->top++;
        st->s[st->top]=x;
    }
}

void pop(struct stack *st)
{
    if(st->top==-1)
        printf("stack underflow");
    else{
            printf("poped element is %d \n",st->s[st->top]);
        st->top--;}
}
int full(struct stack st)
{
if(st.top==st.size-1)
    return 1;
return 0;
}
int main()
{
    struct stack st;
    creat(&st);
    push(&st,19);
    push(&st,29);
    pop(&st);
    display(st);
if(full(st))
    printf("full");
else
    printf("not full");

return 0;
}
