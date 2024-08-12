#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void sort();
void t_comp();
void selection_sort(int a[],int n);
void display(int n,int a[]);

int main()
{
  sort();
  t_comp();
}

void sort()
{
  int n,a[10000];
  printf("Enter number of elements:\n ");
  scanf("%d",&n);
  printf("Enter the array:\n");
  for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
  printf("\nEntered array:\n");
  display(n,a);
  selection_sort(a,n);
  printf("\nElements after sorting:\n");
  display(n,a);
}

void display(int n,int a[])
{
  for(int i=0;i<n;i++)
  {
    printf("%d\t",a[i]);
  }
}

void selection_sort(int a[],int n)
{
  int i,min,j,temp;
  for(i=0;i<n-1;i++)
  {
    min=i;
    for(j=i+1;j<n;j++)
    {
      if(a[j]<a[min])
      {
        min=j;
      }
    }
    temp=a[i];
    a[i]=a[min];
    a[min]=temp;
  }
}
void t_comp()
{
  int n=10000,a[100000] ,it=0;
  double time[10];
  clock_t start,end;
  printf("\nInput size, Time complexity\n");
  while(it<5)
  {
    for(int i=0;i<n;i++)
    {
      a[i]=rand()%100;
    }
    start=clock();
    selection_sort(a,n);
    end=clock();
    time[it]=(double)(end-start)/CLOCKS_PER_SEC;
    printf("%d, %f\n",n,time[it]);

    n+=10000;
    it++;
  }
  printf("\nTotal time taken :%f",(float)(end-start)/CLOCKS_PER_SEC);
}
