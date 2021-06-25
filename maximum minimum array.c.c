
#include <stdio.h>
int main()
{
    int arr[50];
    int n,i;
    printf("Enter number of array input: ");
    scanf("%d",&n);
    printf("Enter array: ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int max=arr[0];
    int min=arr[0];
     for(i=0;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
        else if(arr[i]<min)
            min=arr[i];
    }
    printf("Maximum array: %d\nMinimum array: %d\n",max,min);
    return 0;
}
