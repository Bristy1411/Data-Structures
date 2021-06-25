#include<bits/stdc++.h>
using namespace std;

float I(float h,int n,float f[])
{
    float sum=f[0];
    int i;
    for(i=1;i<n;i++)
        sum=sum+2*f[i];
    sum=sum+f[n];
    return h*sum/2;
}

float F(float x[],int i)
{
    return 0.2+25*x[i]-200*pow(x[i],2)+675*pow(x[i],3)-900*pow(x[i],4)+400*pow(x[i],5);
}

int main()
{
    float a,b,h,correct_value;
    int n,i;
    cout<<"Enter number of segment: ";
    cin>>n;
    float x[n],f[n];
    cout<<"\nEnter first position: ";
    cin>>a;
    cout<<"\nEnter second position: ";
    cin>>b;
    x[0]=a;
    h=(b-a)/n;
    cout<<"\nh= "<<h;
    cout<<"\n\npoints are: "<<x[0]<<"\t";
    for(i=0;i<n;i++)
    {
        x[i+1]=x[i]+h;
        cout<<x[i+1]<<"\t";
    }
    for(i=0;i<=n;i++)
    {
        f[i]=F(x,i);
    }

    float result=I(h,n,f);
    cout<<"\n\nI="<<result;
    cout<<"\n\nEnter the value of the Integral: ";
    cin>>correct_value;
    float Et=fabs((correct_value-result)/correct_value)*100;
    cout<<"\n\nEt= "<<Et<<"%";
}
