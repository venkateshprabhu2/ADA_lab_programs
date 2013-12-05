#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void source(int a[20][20],int n);



void main()
{
  int a[20][20],n,i,j;
  printf(" enter the num of vertices ");
  scanf("%d",&n);
  printf("enter the adjacency matrix");
  for(i=1;i<=n;i++)
  {
  for(j=1;j<=n;j++)
  {
    scanf("%d",&a[i][j]);
  }
  }
  source(a,n);

 }



void source(int a[20][20],int n)
{
int sum,s[10],indegree[10],u,v,i,j,t[10];
int top=-1,k=1;
for(j=1;j<=n;j++)
{
 sum=0;
 for(i=1;i<=n;i++)
 {
 sum=a[j][i]+sum;
 }
 indegree[j]=sum;
 }

 for(i=1;i<=n;i++)
 {
   if(indegree[i]==0)
    s[++top]=i;

  }

  while(top!=-1)
  {
  u=s[top--];
  t[k++]=u;
  for(v=1;v<=n;v++)
  {
    indegree[v]-=1;
    if(indegree[v]==0)
    s[++top]=v;
  }
 }


 for(i=1;i<=n;i++)
 {
  printf("%d\t",t[i]);
  }
  }


