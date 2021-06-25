#include<bits/stdc++.h>
using namespace std;


sum_of_sudsets(int s,int k,int r)
{
    x[k]=1;
    if(s+w[k]==m)
    {
        cout<<x[k];
    }
    else if(s+w[k+1]<=m)
    {
        sum_of_sudsets(int s+w[k],k+1,r-w[k]);
    }
    if(s+r-w[k+1] && s+w[k+1]<=m)
    {
        x[k]=0;
        sum_of_sudsets(int s,k+1,r-w[k]);
    }
}

int main()
{
    int n,i,j,m,s=0,r=0,k=0;
    cout<<"enter sum of the element: ";
    cin>>m;
    cout<<"enter array size: ";
    cin>>n;
    float x[n]
    for(i=0;i<n;i++)
       {
           cin>>x[i];
           r=r=x[i];
       }
    sum_of_sudsets(s,k,r);
    return 0;
}
