#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void prims(int n,int cost[10][10])
{
int min=999,source=1,i,j,k,p[10],u;
int select[10][2],visit[10]={0},sum=0,count=0;

visit[source]=1;
k=0;
while(count<n-1)
{
  min=999;
  for(i=1;i<=n;i++)
 {

    for(j=1;j<=n;j++)
    {
    if((visit[i]==1)&&(visit[j]!=1))
    {
    if(cost[i][j]<min)
    {
      min=cost[i][j];
      u=j;
      p[u]=i;
    }
 }
}
}

visit[u]=1;
count++;
select[k][0]=u;
select[k][1]=p[u];
k++;
sum=sum +cost[u][p[u]];
}

if(sum<999)
{
printf("\nmin spannig tree exist\n");

for(i=0;i<n-1;i++)
{
printf("%d->%d\n",select[i][0],select[i][1]);
}
printf("sum of cost adjacency is=%d\n",sum);
}
else
printf("min spanning tree doesnt exist");
}

void main()
{
int cost[10][10],n,i,j;
clrscr();
printf("enter the no of vertices");
scanf("%d",&n);

printf("enter the cost adjacency matrix");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
 scanf("%d",&cost[i][j]);
 }
 prims(n,cost);
 getch();
 }