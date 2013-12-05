#include<stdio.h>
#include<conio.h>

int a[10][10],visited[10],n,cost=0,sum=0,lastcity=0,vs[10]={0};

void get()
{
int i,j;
printf("enter the no of cities");
scanf("%d",&n);
printf("\n enter the cost matrix :\n");
for(i=1;i<=n;i++)
{
 printf("enter elem of row %d \n",i);
for(j=1;j<=n;j++)
  scanf("%d",&a[i][j]);
  visited[i]=0;
  }
  printf("\n\nthe cost list is:\n\n");
  for(i=1;i<=n;i++)
  {
  printf("\n\n");
  for(j=1;j<=n;j++)
  printf("\t%d",a[i][j]);
  }
  }
  void mincost(int city)
  {
  int i,ncity;
  visited[city]=1;
  printf("%d->",city);
  ncity=least(city);
  if(ncity==999)
  {
  ncity=1;
  printf("%d",ncity);
  cost+=a[city][ncity];
  return;
  }
  mincost(ncity);

  }
  int least(int c)
  {
  int i,nc=999;
  int min=999,kmin;

  for(i=1;i<=n;i++)
  {
  if((a[c][i]!=0)&&(visited[i]==0))
  if(a[c][i]<min)
  {
  min=a[i][1]+a[c][i];
  kmin=a[c][i];
  nc=i;
  }
  }
  if(min!=999)
  cost+=kmin;
  return nc;
  }
  void nearest_neighbour(city)
  {
  int min,j,i,u;
  vs[city]=1;
  printf("%d->",city);
  u=city;
  for(j=1;j<=n;j++)
  {
  min=999;
  for(i=1;i<=n;i++)
  {

  if((vs[i]==0)&&(a[city][i]!=0))
  {
  if(a[city][i]<min)
  {
  min=a[city][i];
  u=i;
  }
  }
city=u;
}

  vs[u]=1;
  if(min!=999)
  {
  sum+=min;
  printf("%d->",u);
  }}
lastcity=u;
}


   void put()
  {
  printf("\n\nminimum cost:");
  printf("%d",cost);
  }

  void main()
  {
  float ratio;
  clrscr();
  get();
  printf("\n\nthe path is:\n\n");
  mincost(1);
  put();
  printf("\nthe pathis (using approximation algo):\n");
  nearest_neighbour(1);
  printf("1");
  sum=sum+a[lastcity][1];

  printf("minimum cost is%d\n",sum);
  ratio=(float)sum/cost;
  printf("the accuracy ratio is %f\n",ratio);
  getch();
  }

