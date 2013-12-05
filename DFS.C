#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int a[10][10],n,vis[10]  ;

int dfs(int src)  ;

void main()
{

int ans,src,i,j;
clrscr();
for(j=1;j<=n;j++)
{
vis[j]=0;
}
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
      scanf("%d",&src);
      ans=dfs(src);
      if(ans==1)
      printf("\n graph is connected\n");
      else
      printf("\n graph is not connected\n");
     getch();

}

int dfs(int src)
{
int j;
vis[src]=1;
for(j=1;j<=n;j++)
{
if((a[src][j]==1)&&(vis[j]!=1))
{
dfs(j);
}
}
for(j=1;j<=n;j++)
{
if(vis[j]!=1)
{
return 0;
}
}
return 1;
}


