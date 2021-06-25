#include<stdio.h>
int main()
{
    int arr[50],i,n,v,index,t;
    printf("Enter array input number: ");
    scanf("%d",&n);
    printf("Enter array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter index number & value");
    scanf("%d %d",&index,&v);
    t=n;
    while(t>index)
    {
        arr[t]=arr[t-1];
        t--;
    }
    arr[index]=v;
    n++;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
