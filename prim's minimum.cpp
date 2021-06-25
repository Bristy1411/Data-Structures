#include<bits/stdc++.h>
using namespace std;
//#include<limits.h>
//#include<stdbool.h>
#define V 5
int minkey(int key[],bool mstSet)
{
    int min=INT_MAX;
    int min_index,v;
    for(v=0;v<V;v++)
    {
        if(mstSet==false&&key[v]<min)
           {
               min=key[v];
               min_index=v;
           }
    }
    return min_index;
}
int printMST(int parant[],int n,int graph[V][V])
{
    printf("Edges\t weight\n");
    int i;
    for(i=1;i<V;i++)
        printf("%d - %d\t %d\n",parant[i],i,graph[i][parant[i]]);
}
void primMST(int graph[V][V])
{
    int parant[V];
    int key[V];
    bool mstSet[V];
    int i;
    for(i=0;i<V;i++)
    {
        key[i]=INT_MAX;
        mstSet[i]=false;
    }
    key[0]=0;
    parant[0]=-1;
    int j;
    for(j=0;j<V-1;j++);
    {
        int u=minkey(key,mstSet);
        mstSet[u]=true;
        int v;
        for(v=0;v<V;v++)
        {
            if(graph[u][v] && mstSet[v]==false && graph[u][v]<key[v])
                {
                    parant[v]=u;
                    key[v]=graph[u][v];
                }
        }
    }
    printMST(parant,V,graph);
}
int main()
{
    int graph[V][V];
    int i,j;
    printf("Enter the graph: \n");
    for(i=0;i<V;i++)
    {
        for(j=0;j<V;j++)
            scanf("%d",&graph[i][j]);
    }
    primMST(graph);
    return 0;
}
