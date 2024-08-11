#include<stdio.h>

int i,k,n,j,d[10][10];

int min(int a,int b)
{
  return (a<b)?a:b;
}

void floyd()
{
  for(k=0;k<n;k++)
    for(i=0;i<n;i++)
      for(j=0;j<n;j++)
        d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
}

int main()
{
  printf("\n\nFLOYDS ALGORITHM:\n\n");
  printf("Enter number of vertices:\n");
  scanf("%d",&n);
  printf("Enter cost matrix:\n");
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      scanf("%d",&d[i][j]);
  printf("Entered cost matrix:\n");
  for(i=0;i<n;i++)  
  {
    for(j=0;j<n;j++)
    {
      printf("%d\t",d[i][j]);
    }
    printf("\n");
  }


  floyd();

  printf("\nPATH MATRIX:\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d\t",d[i][j]);
    }
    printf("\n");
  }
}
