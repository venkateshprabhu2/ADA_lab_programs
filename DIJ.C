#include<stdio.h>
#include<conio.h>

void dij(int src,int cost[][10],int dist[],int n)
{
int visited[10],min,i,j,u;
for(i=1;i<=n;i++)
{visited[i]=0;
dist[i]=cost[src][i];
}
visited[src]=1;
dist[src]=0;
for(i=0;i<= n;i++)
{
if(i==src)continue;
min=999;
for(j=1;j<=n;j++)
{
if((visited[j]==0)&&(min>dist[j]))
{min=dist[j];
u=j;
}
}

visited[u]=1;
for(j=1;j<=n;j++)
{
 if(visited[j]==0)
 {
 if(dist[j]>dist[u]+cost[u][j])
 dist[j]=dist[u]+cost[u][j];
 }
 }
}
}
 void main()
 {
 int n,cost[10][10],dist[10]={0},i,j,src;

 clrscr();
 printf("enter the num of vertices in the  graph");
 scanf("%d",&n);
 printf("enter the adjacency matrix of the graph with 999 for infinity");
 for(i=1;i<=n;i++)
 for(j=1;j<=n;j++)
 scanf("%d",&cost[i][j]);

 printf("enter the source vertex");

 scanf("%d",&src);
 dij(src,cost,dist,n);
 printf("the shortest path from the source %d to all the vertices are \n",src);
  for(i=1;i<=n;i++)
 printf("to %d=%d\n",i,dist[i]);
 getch();
 }
