#include<stdio.h>
int i;
int Linear_search(int arr[],int x,int n)
{
    for (i=0;i<n;i++)
    {
        if(arr[i]==x)
            printf("array index arr[%d]=%d",i,arr[i]);
        if(i==n)
            printf("not found");
    }
     /*i=0;
    while(i<n&&arr[i]!=x)

    {
        i++;
    }
    if(i==n)
        printf("Not found\n");
    else
        printf("%d is in index %d\n",x,i);*/
}

int main()
{
    int n,x,arr[50];
    printf("enter array size:");
    scanf("%d",&n);
    printf("enter array: ");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter searching value:");
    scanf("%d",&x);
    int m=Linear_search(arr,x,n);
    return 0;
}

