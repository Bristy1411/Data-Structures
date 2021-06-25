#include<bits/stdc++.h>
using namespace std;

int i,j;

void knapsack(int n,float w[],float p[],float m)
{
    float x[n],psum=0;
    float u=m;
    for(i=0;i<n;i++)
    {
        x[i]=0.0;
        if(w[i]>u)
            break;
        else
        {
            x[i]=1;
            psum+=p[i];
            u-=w[i];
        }
    }
    if(i<n)
        x[i]=u/w[i];
    psum+=(x[i]*p[i]);
    cout<<"The result Vector is:\n";
    for(i=0;i<n;i++)
        cout<<x[i]<<"\t";
    cout<<"\n\nMaximum Profit: "<<psum;
}

int main()
{
    int n;
    cout<<"Enter number of items: ";
    cin>>n;
    float m,t,w[n],p[n],r[n];
    cout<<"\n\nEnter knapsack capacity: ";
    cin>>m;
    cout<<"\n\nEnter weights & profits: \n";
    for(i=0;i<n;i++)
        cin>>w[i]>>p[i];
    for(i=0;i<n;i++)
        r[i]=p[i]/w[i];
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(r[i]<r[j])
            {
                t=w[j];
                w[j]=w[i];
                w[i]=t;
                t=p[j];
                p[j]=p[i];
                p[i]=t;
            }
        }
    }
    knapsack(n,w,p,m);
    return 0;
}
