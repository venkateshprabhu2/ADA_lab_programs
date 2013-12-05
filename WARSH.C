#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int v[10][10],x[10];
void warshalls(int n,int a[10][10]);


  void main()
  {

   int n,i,j,a[10][10];
   clrscr();
  printf("enter the size of matrix\n");
  scanf("%d",&n);
  printf("enter the elements");
  for(i=1;i<=n;i++)
  {
  for(j=1;j<=n;j++)
  {
    scanf("%d",&a[i][j]);
    }
  }

  printf("the matrix which is entered");
  for(i=1;i<=n;i++)
  {
  for(j=0;j<=n;j++)
  {
    printf("%d\t",a[i][j]);
    }
    printf("\n");
}

warshalls(n,a);
getch();
    }


void warshalls(int n,int a[10][10])
{

int i,j,k;

for(k=1;k<=n;k++)
{
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
if(a[1][j]!=1)
{

  if((a[i][k]==1)&&( a[k][j]==1))
  {
  a[i][j]=1;
  }
  }
  }}}

  printf("transitive closure");
  for(i=1;i<=n;i++)
  {
  for(j=1;j<=n;j++)
  {
  printf("%d\t",a[i][j]);
  }
  printf("\n\n");
  }
  }
