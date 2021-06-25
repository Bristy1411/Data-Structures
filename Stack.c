#include<stdio.h>
#define S 100
typedef struct St{
    int data[S];
    int top;
}Stack;
int Size;
void push(Stack *s,int v)
{
        s->data[s->top]=v;
        s->top+=1;
}
int pop(Stack *s)
{
    int v;
    if(s->top==0)
    {
        printf("Stack underflow\n");
        return -1;
    }
    s->top-=1;
    v=s->data[s->top];
    return v;
}
int main()
{
    int x=0,v,k;
    Stack s;
    s.top=0;
    printf("Size: ");
    scanf("%d",&Size);
    while(x==1||x==0)
    {
        printf("Enter 1 to push 0 to pop,other digit to stop\n");
        scanf("%d",&x);
        if(x==1)
        {
           if(s.top==Size)
            printf("Stack overflow\n");
           else
           {
                scanf("%d",&v);
               push(&s,v);
           }
        }else if(x==0)
        {
            k=pop(&s);
            if(k!=-1)
                printf("%d\n",k);
        }
    }
    return 0;
}
