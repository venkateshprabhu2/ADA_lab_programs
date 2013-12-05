#include<stdio.h>
#include<conio.h>
#define swap(x,y,temp)(temp=x,x=y,y=temp)

int partiton(int a[],int low,int high)
{
int pivot,i,j,temp;
pivot=a[low];
j=high+1;
do
{
do{
i=i+1;
}while(pivot>=a[i]);

do
{
j=j-1;
}while(pivot<a[j]);
if(i<j)
swap(a[i],a[j],temp);
}while(i<=j);
swap(a[j],a[low],temp);
return j;
}

void quicksort(int a[],int low,int high)
{
int s;
if(low<=high)
{
 s=partiton(a,low,s-1);
 quicksort(a,s+1,high);
}
 }

 void main()
 {

 int a[40],i,j,n;
 clrscr();
 printf("enter the size of the array");
 scanf("%d",&n);
 printf("enter the elements of array");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  quicksort(a,0,n-1);
  printf("the sorted array is");
  for(i=0;i<n;i++ )
  printf("%d\t",a[i]);
  getch();
  }
