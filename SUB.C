#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void subset(int,int,int);
int count,d,s[10],x[10];
void main()
{

 int sum=0,count=0,i,n;
 clrscr();
 printf("enter the num of elements");
 scanf("%d",&n);
 printf("enter the element in accending order\n");
 for(i=0;i<=n-1;i++)
 {
 scanf("%d",&s[i]);
 }

 printf("enter the required sum");
 scanf("%d",&d);
 for(i=0;i<=n-1;i++)
 {
 sum=sum+s[i];
 }
 if(sum<d||s[0]>d)
 {
 printf("no sol exist");
 }
 else
 {
 subset(0,0,sum);
 }
 getch();
 }



 void subset(int m,int k,int sum)
 {
 int i;
 x[k]=1;
 if(m+s[k]==d)
 {
 printf("subset sol%d \t",++count);
 for(i=0;i<=k;i++)
 {
 if(x[i]==1)
 {
 printf("%d\t",s[i]);
 }}}
 else if(m+s[k]+s[k+1]<=d)
 {
 subset(m+s[k],k+1,sum-s[k]);
 }
 if((m+sum-s[k]>=d)&&(m+s[k+1]<=d))
 {x[k]=0;
 subset(m,k+1,sum-s[k]);
 }
 }