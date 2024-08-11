#include<stdio.h>
#include<math.h>

int a[30],count=0;

int place(int pos)
{
  int i;
  for(i=1;i<pos;i++)
  {
    if((a[i]==a[pos])||((abs(a[i]-a[pos])==abs(i-pos))))
      return 0;
  }
  return 1;
}
void print_pos(int n)
{
  int i,j;
  count++;
  printf("Solution :%d\n",count);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
      if(a[i]==j)
        printf("Q\t");
      else  
        printf("X\t");
    }
    printf("\n");
  }
}
void queens(int n)
{
  int k=1;
  a[k]=0;
  while(k>0)
  {
    if(++a[k]<=n)
    {
      if (place(k))
      {
          if(k==n)
            print_pos(k);
          else
            a[++k]=0;
      }
    }
    else{
      k--;
    }
  }
}
int main()
{
  int n;
  printf("Enter no of queens:\n");
  scanf("%d",&n);
  queens(n);
  printf("Total no of solutions : %d",count);
}
