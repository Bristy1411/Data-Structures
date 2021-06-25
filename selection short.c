#include<stdio.h>
int i,j;
void SelectionShort(int arr[],int n)
{
    for(i=0;i<=n-1;i++)
    {
        int min=i;
        for(j=i+1;j<=n-1;j++)
        {
            if(arr[j]<arr[min])
                min=j;
        }
        int x=arr[i];
        arr[i]=arr[min];
        arr[min]=x;
    }
    printf("Shorted array:\n");
    for(i=0;i<=n-1;i++)
        printf("%d ",arr[i]);
}
int main()
{
    int arr[100],n;
    printf("Enter array input number: ");
    scanf("%d",&n);
    printf("Enter array: ");
    for(i=0;i<=n-1;i++)
        scanf("%d",&arr[i]);
    SelectionShort(arr,n);
    return 0;
}
