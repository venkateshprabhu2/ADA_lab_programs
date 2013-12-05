#include<stdio.h>
#include<conio.h>
int c[10][10],n;
void kruskals();
void main()
{
	int i,j;
	clrscr();
	printf("Enter the number of vert\n");
	scanf("%d",&n);
	printf("Enter the mat\n");
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			scanf("%d",&c[i][j]);
	kruskals();
	getch();
}
void kruskals()
{
	int p[10];
	int ne,mincost,min;
	int u,v,a,b;
	int i,j;
	ne=0;
	mincost=0;
	for(i=1;i<=n;i++)
		p[i]=0;
	while(ne!=n-1)
	{
		min=9999;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(c[i][j]<min)
				{
					min=c[i][j];
					u=i;
					v=j;
					a=i;
					b=j;
				}
			}
		}
		while(p[u]!=0)
			u=p[u];
		while(p[v]!=0)
			v=p[v];
		if(u!=v)
		{
			ne++;
			mincost=mincost+min;
			p[v]=u;
			printf("\n%d--->%d\n",a,b,min);
		}
		c[a][b]=c[b][a]=9999;
	}
	printf("\nMincost=%d",mincost);
}