#include<bits/stdc++.h>
using namespace std;

int main()
{
    float x0=0,y0=0,z0=0,x,y,z;
    int i=0;
    while(i<4)
    {
        x=(16-(9*y0)-z0)/4;
        printf("x=%.5f\n",x);
        y=(1-(25*x0)-(49*z0))/36;
        printf("y=%.5f\n",y);
        z=(100-x0-(64*y0))/81;
        printf("z=%.5f\n",z);
        float Ex=abs((x-x0)/x)*100;
        printf("Ex=%.2f\n",Ex);
        float Ey=abs((y-y0)/y)*100;
        printf("Ey=%.2f\n",Ey);
        float Ez=abs((z-z0)/z)*100;
        printf("Ez=%.2f\n\n",Ez);
        x0=x;
        y0=y;
        z0=z;
        i++;
    }
    return 0;
}
