#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void knapsack(int n,int m,int w[10],int p[10]);
int v[10][10],x[10];

void main()
{

   int i,j,n,m,w[10],p[10];
   clrscr();

   printf("enter the no of objects int the graph");
   scanf("%d",&n);
   printf("enter the total capacity for the graph");
   scanf("%d",&m);
   printf("enter the wieght for each vetices");

   for(i=1;i<=n;i++)
    scanf("%d",&w[i]);
    printf("enter the profit for each vertices\n");
    for(i=1;i<=n;i++)
    scanf("%d",&p[i]);
    knapsack(n,m,w,p);
    getch();

    }

    void knapsack(int n,int m,int w[10],int p[10])
    {
    int i,j;
    for(i=1;i<=n;i++)
    {
     for(j=1;j<=m;j++)
     {
     if(i==0||j==0)
	v[i][j]=0;

     else if(w[i]>j)

	 v[i][j]=v[i-1][j];
     else

	v[i][j]=maximum(v[i-1][j],v[i-1][j-w[i]]+p[i]);
     }
     }
     for(i=1;i<=n;i++)
     x[i]=0;
     i=n;
     j=m;
     while((i!=0)&&(j!=0))
     {
     if(v[i][j]!=v[i-1][j])
     {
     x[i]=1;
     j=j-w[i];
     }
     i=i-1;
     }
     printf("the matrix is\n");
      for(i=0;i<=n;i++)
     {
     for(j=0;j<=m;j++)
     {
     printf("%\d\t",v[i][j]);
     }
     printf("\n");
     }
     printf("the optimal sol is %d",v[n][m]);
     printf("the items which is selected is\t");
     for(i=0;i<=n;i++)

     {
     printf("%d\t",x[i]);
     }
     }

int maximum(int a,int b)
{
  if(a>b)
  return a;
  else
  return b;
}

