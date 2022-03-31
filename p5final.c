
   
#include<stdio.h>
float input()
{
  float n;
  printf("Enter the Number to find Square root: ");
  scanf("%f",&n);
  return n;
}
float my_sqrt(float n)
{
  float x = n;
  float y = 1;
  float e=0.000001;
  while(x-y>e)
  {
    x=(x+y)/2;
    y=n/x;
  }
  return x;
}
void output(float n, float sqrt_result)
{
  printf("Square Root  of %0.2f is %0.2f  \n",n,sqrt_result);
}
int main()
{
  float n,sqrt;
  n = input();
  sqrt=my_sqrt(n);
  output(n,sqrt);
  return 0;
}

