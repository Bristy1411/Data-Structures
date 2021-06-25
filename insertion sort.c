#include<stdio.h>
int i,j;
int insertion_sort(int arr[],int n)
{
    for(j=1;j<n;j++)
    {
        i=j-1;
        int temp=arr[j];
        while(i>=0&&arr[i]>temp)
        {
            arr[i+1]=arr[i];
            i--;
        }
        arr[i+1]=temp;
        printf("Step %d:",j);
        for (i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
}
int main()
{
    int arr[50],n;
    printf("Enter array element number: ");
    scanf("%d",&n);
    printf("Enter arry: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    insertion_sort(arr,n);
    printf("sorted array: ");
    for (i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
