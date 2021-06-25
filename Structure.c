#include<stdio.h>

struct student{
    int id;
    char name[50];
    float quiz[50],average;
}s[50];

int main()
{
    int n,m,i,j,total=0;
    printf("enter student number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("information of %dth student",i);
        printf("student name: ");
        scanf("%s",&s[i].name);
        printf("student id: ");
        scanf("%d",&s[i].id);
        printf("Enter number of quiz: ");
        scanf("%d",&m);
        for(j=1;j<=m;j++)
        {
            printf("mark obtained in %dth quiz: ",j);
            scanf("%f",&s[i].quiz[j]);
            total=total+s[i].quiz[j];
        }
        s[i].average=total/m;
        printf("average= %f",s[i].average);
    }

    return 0;
}
