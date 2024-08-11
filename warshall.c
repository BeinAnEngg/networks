#include<stdio.h>

  int n,w[10][10],i,k,j;


void warshall(int w[10][10],int n)
{
  for(k=0;k<n;k++)
    for(i=0;i<n;i++)
      for(j=0;j<n;j++)
        w[i][j]=w[i][j]||w[i][k]&&w[k][j];
}

int main()
{
  printf("\n\nWARSHALLS ALGORITHM\n\n");
  printf("Enter no of vertices:\n");
  scanf("%d",&n);
  printf("Enter adjacency matrix:\n");
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      scanf("%d",&w[i][j]);
  printf("\nEntered adjacency matrix:\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d\t",w[i][j]);
    }
    printf("\n");
  }

  warshall(w,n);

  printf("PATH MATRIX:\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d\t",w[i][j]);
    }
    printf("\n");
  }
  return 0;
}
