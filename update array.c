#include<stdio.h>
int main()
{
    int arr[50],n,index,v,i;
    printf("enter array element number: ");
    scanf("%d",&n);
    printf("enter array: ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("enter index number & value: ");
    scanf("%d %d",&index,&v);
    for(i=0;i<n;i++)
    {
        if(i==index)
        {
            arr[i]=v;
            break;
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;

}
