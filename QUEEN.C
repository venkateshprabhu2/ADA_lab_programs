#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<conio.h>
void queen(int n);
int place(int xk,int k);


int x[10];
void main()
{
int n;
clrscr();
printf("enter the no of queens");
scanf("%d",&n);
queen(n);
printf("\n 1 is where the queen is, 999 are empty spaces");
getch();
}

void queen(int n)
{
 int i, k,j;
 char q[10][10];
 k=1;
 x[k]=0;
 while(k!=0)
 {
   x[k]+=1;

 while((x[k]<=n)&&(place(x[k],k)!=1))
 {  x[k]+=1;
 }
 if(x[k]<=n)
 {
     if(k==n)
     {
      for(i=1;i<=n;i++)
 {
 for(j=1;j<=n;j++)
  q[i][j]='X';
 }
     printf("\n");
      for(i=1;i<=n;i++)
      {
	q[i][x[i]]='Q';
      }
      for(i=1;i<=n;i++)
      {
       for(j=1;j<=n;j++)
       {
	printf("%c\t ",q[i][j]);
	}
	printf("\n");
      }
      }
    else
     {
       k++;
       x[k]=0;
     }
 }
  else
    k--;
 }


}

    int place(int xk,int k)
    {
    int i;

    x[k]=xk;
    for(i=1;i<=k-1;i++)
    {
    if(x[i]==x[k]||abs(i-k)==abs(x[i]-x[k]))
     return 0;
    }

     return 1;
     }