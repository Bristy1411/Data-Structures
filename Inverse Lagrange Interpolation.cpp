#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,m,y=19;
    float mul=1.00,tmul,x=0.00;
    printf("Enter size of array x and y:");
    scanf("%d",&m);

    float ax[m],ay[m];
    printf("Enter values of x:");
    for(i=0;i<m;i++)
        scanf("%f",&ax[i]);
    printf("Enter values of y:");
    for(i=0;i<m;i++)
        scanf("%f",&ay[i]);

    for(i=0;i<m;i++)
        {
            for(j=0;j<m;j++)
            {
                    if(j!=i)
                    {
                        mul=mul*(y-ay[j])/(ay[i]-ay[j]);
                    }
            }
            tmul=mul*ax[i];
            x=x+tmul;
        }
        printf("value of x= %d");
        return 0;
}
