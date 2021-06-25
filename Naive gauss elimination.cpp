#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,m,n;
    //take matrix input
    printf("Enter the order of matrix: ");
    scanf("%d",&m);
    float a[m][m+1],c;
    printf("Enter matrix elements: ");
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=m+1;j++)
            scanf("%f",&a[i][j]);
    }
    printf("the matrix is:\n");
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=m+1;j++)
            printf("%.2f\t",a[i][j]);
        printf("\n");
    }
    //for elimination
    for(j=1; j<=m; j++)
    {
        for(i=1; i<=m; i++)
        {
            if(i>j)
            {
                c=a[i][j]/a[j][j];
                for(k=1; k<=m+1; k++)
                {
                    a[i][k]=a[i][k]-c*a[j][k];
                }
            }
        }
    }
     printf("the matrix is:\n");
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=m+1;j++)
            printf("%.2f\t",a[i][j]);
        printf("\n");
    }
    return 0;
}
