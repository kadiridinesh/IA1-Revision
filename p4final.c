#include<stdio.h>
int input_array_size()
{
  int n;
  printf("Enter the Size of the Array: ");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  int i;
  printf("Enter the Values of Array : ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
}
int sum_n_arrays(int n,int a[n])
{
  int sum=0,i;
  for(i=0;i<n;i++)
  {
    sum=sum+a[i];
  }
  return sum;
}
void out_put(int n, int a[n], int sum)
{
  int i;
  printf("Sum of ");
  for(i=0;i<n;i++)
  {
    printf("%d + ",a[i]); 
  }

  printf("is %d \n ",sum);
}
int main()
{
  int limit,i,sum;
  limit=input_array_size();
  int  value[limit];
  input_array(limit,value);
  sum=sum_n_arrays(limit,value);
  out_put(limit,value,sum);
  return 0;
}