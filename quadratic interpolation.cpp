#include<bits/stdc++.h>
using namespace std;

float f_x(float x)
{
    return log(x);
}

int main()
{
    int x0=1,x1=4,x2=6;
    float x=2;
    int i;
    for(i=1;i<=10;i++)
    {
        float b0=f_x(x0);
        float b1=(f_x(x1)-f_x(x0))/(x1-x0);
        float b2=(((f_x(x2)-f_x(x1))/(x2-x1))-b1)/(x2-x0);
        float F=b0+(b1*(x-x0))+(b2*(x-x0)*(x-x1));
        printf("%f\t",F);
        float Et=abs((f_x(x)-F)/f_x(x))*100;
        printf("Et= %f\n",Et);

        x=x+0.5;
    }
    return 0;
}
