#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mat[3][3],i,j;
    float det=0;

    printf("Enter the elements of matrix=\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
    scanf("%d",&mat[i][j]);

    printf("\n The given matrix is=");
    for(i=0;i<3;i++)
    {
        printf("\n");

    for(j=0;j<3;j++)
        printf("%d\t",mat[i][j]);
    }

    //finding determine

    for(i=0;i<3;i++)
        det=det+(mat[0][i] * (mat[1][(i+1)%3] *mat[2][(i+2)%3]-mat[1][(i+2)%3] * mat[2][(i+1)%3]));

    printf("\n\n Determinant=%f\n",det);


    printf("\n Inverse matrix is=\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)

    printf("%.2f\t",((mat[(j+1)%3][(i+1)%3]* mat[(j+2)%3][i+2]%3)-(mat[(j+1)%3][(i+2)%3]* mat[(j+2)%3][(i+2)%3]))/det);


        printf("\n");
    }

    return 0;

}
