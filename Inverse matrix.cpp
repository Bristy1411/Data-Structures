#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k;
    printf:("enter the order of matrix: ");
    scanf("%d",&n);
    float a[n][n],c[n],x[n],d,adj[n][n],t_adj[n][n];
    printf("Enter coefficients matrix: ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%f",&a[i][j]);
    }
    //determinant
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            {
                for(k=j;k<n;k++)
                {

                d=a[i][j]*(a[i][j]-a[i[j]);
                }
            }
    }
    //adjoint
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            t_adj[i][j]=
    }

    return 0;
}
