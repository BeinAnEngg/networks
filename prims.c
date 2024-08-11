#include<stdio.h>

int visited[10]={0},cost[10][10],min,mincost=0;

void input(int n)
{
  int i,j;
  printf("\nEnter the cost matrix:\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&cost[i][j]);
    }
  }
}

void display(int n)
{
int i,j;
 printf("\nEnter the cost matrix:\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d",cost[i][j]);
      printf("\t");
    }
    printf("\n");
  }
}

void prims(int n)
{
  int i,j,ne=1,a,b;
  visited[1]=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(cost[i][j]==0)
            cost[i][j]=999;
        }
    }
  while(ne<n)
  {
    min=999;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(visited[i]==1 && visited[j]==0)
                if(i!=j  && min>cost[i][j])
                {
                    min=cost[i][j];
                    a=i;
                    b=j;
                }
    visited[b]=1;
    mincost=mincost+min;
    ne++;
    printf("\n(%d-->%d)cost:%d",a,b,min);
  }
  printf("\n\n\nMinimum cost=%d",mincost);
}

int main()
{
 int n;
 printf("\n\t\t\t Prim's Algorithm");
 printf("\n\n Enter the nber of nodes=");
 scanf("%d",&n);
 input(n);
 display(n);
 prims(n);
 return 0;
}
