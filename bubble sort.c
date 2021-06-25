#include<stdio.h>
void bubble_sort(int arr[],int n)
{
    int i,j,t;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
               t=arr[i];
               arr[i]=arr[j];
               arr[j]=t;
            }
        }
    }

}
int main()
{
    int arr[50],i,j,n;
    printf("Enter array input number: ");
    scanf("%d",&n);
    printf("Enter array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    bubble_sort(arr,n);
    printf("Shorted array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

