#include<bits/stdc++.h>

struct list
{
    int data;
    struct list *next;
};
int main()
{
    struct list *p,*q,*t,*r,*s,*u;
    int x,y,z,a;
    p=new list;
    printf("\nEnter first value in list: ");
    scanf("%d",&p->data);
    printf("\nEnter next value: ");
    scanf("%d",&x);
    q=p;
    while(x>0)
    {
        t=new list;
        t->data=x;
        q->next=t;
        q=t;
        printf("\nEnter next value: ");
        scanf("%d",&x);
    }
    q->next=NULL;
    //Display list
    t=p;
    printf("\n\nList 1 Contain:\n ");
    while(t)
    {
        printf("%d\t",t->data);
        t=t->next;
    }
    //search value
    printf("\n\nEnter the searching value: ");
    scanf("%d",&y);
    t=p;
    while(t)
    {
        if(y==t->data)
            {
                printf("Found");
                break;
            }
            t=t->next;
    }
    if(t==NULL)
        printf("Not Found");

    //Insert value
    r=new list;
    printf("\n\nEnter the inserted value: ");
    scanf("%d",&r->data);
    printf("Enter the value after which new value will inserted: ");
    scanf("%d",&z);
    t=p;
    while(t->data!=z&& t!=NULL)
    {
        t=t->next;
    }
    r->next=t->next;
    t->next=r;
    printf("\nNew list:\n");
    t=p;
    while(t)
    {
        printf("%d\t",t->data);
        t=t->next;
    }
    //insert in shorted value
    s=new list;
    printf("\n\nEnter the inserted value: ");
    scanf("%d",&s->data);
    q=p;
    while(q->data<=s->data && q!=NULL)
    {
        t=q;
        q=q->next;
    }
    t->next=s;
    s->next=q;
    printf("\nNew list:\n");
    t=p;
    while(t)
    {
        printf("%d\t",t->data);
        t=t->next;
    }
    //Delete value
    printf("\n\nEnter the value to be delete: \n");
    scanf("%d",&a);
    t=p;
    while(t->data!=a&&t!=NULL)
    {
        q=t;
        t= t->next;
    }
    if(t->data==p->data)
    {
       p= p->next;
       free(t);
    }
    else
    {
        q->next=t->next;
        free(t);
    }
    t=p;
    printf("\n\nNew list:\n");
    while (t)
    {
        printf("%d\t",t->data);
        t= t-> next;
    }

}
