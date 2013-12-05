#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void bfs(int a[20][20],int n,int source);

void main()
{

int a[20][20],source,i,j,n;
clrscr();
printf("enter the num of vertices");
scanf("%d",&n);
printf("enter the adjacency mat");
for(i=1;i<=n;i++)
 {

    for(j=1;j<=n;j++)
    {
      scanf("%d",&a[i][j]);
      }}
      printf("enter source vertex\n");
      scanf("%d",&source);
      bfs(a,n,source);
      getch();

}


void bfs(int a[20][20],int n,int source)
{

 int k,f,r,u,v,i;
 int q[50],t[20][20],visit[10];
 for(i=1;i<=n;i++)
 visit[i]=0;
 f=r=k=0;
 visit[source]=1;
 q[r]=source;
 while(f<=r)
 {
 u=q[f];
 f=f+1;
 for(v=1;v<=n;v++)
 {
   if((a[u][v]==1)&&(visit[v]==0))
   {
   visit[v]=1;
   r=r+1;
   q[r]=v;
   }}}


for(i=1;i<=n;i++)
{

if(visit[i]==1)
 printf("%d is reachable from %d\n",i,source);
 else
 printf("%d is not reachable from %d",i,source);
 }

}