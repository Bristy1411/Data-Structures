#include<stdio.h>
int i,j;
void merge(int arr[],int low,int mid,int high)
{
    int left,right;
    left=mid-low+1;
    right=high-mid;
    int left_arr[left],right_arr[right];
    for(i=0;i<left;i++)
    {
       left_arr[i]=arr[low+i];
    }
    for(i=0;i<right;i++)
    {
        right_arr[i]=arr[mid+1+i];
    }
    int l=0,r=0;
    for(i=low;l<left&&r<right;i++)
    {
        if(left_arr[l]<right_arr[r])
        {
            arr[i]=left_arr[l];
            l++;
        }else
        {
            arr[i]=right_arr[r];
            r++;
        }
    }
    while(l<left)
    {
        arr[i]=left_arr[l];
        i++;
        l++;
    }
    while(r<right)
    {
        arr[i]=right_arr[r];
        i++;
        r++;
    }
}
void divide(int arr[],int low,int right)
{
    if(low>=right)
    {
        return;
    }
    else
    {
        int mid=low+(right-low)/2;
        divide(arr,low,mid);
        divide(arr,mid+1,right);
        merge(arr,low,mid,right);
    }
}
int main()
{
    int arr[50],n;
    printf("Enter array size: ");
    scanf("%d",&n);
    printf("Enter array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int low=0,high=n-1;
    divide(arr,low,high);
    printf("Shorted array:");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
