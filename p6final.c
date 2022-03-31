#include<stdio.h>

void input_two_string(char *a, char *b)
{
    printf("Enter the First String: ");
    scanf("%s", a);
    printf("Enter the Second String: ");
    scanf("%s", b);
}

int strcmp(char *a, char *b)
{
    int i,count;
    for(i=0; a[i] && (a[i] == b[i]); i++);
    count=a[i]-b[i];
    return count;
}

void output(char *a, char *b, int result)
{
    if(result < 0)
    {
      printf("%s is Greater than %s\n", b, a);
    }
    else if(result > 0)
    {
      printf("%s is Greater than %s\n", a, b);
    }
    else
    {
       printf("%s is Equal to %s\n", b, a);
    }
}

int main()
{
  char a[20], b[20];
  int result;
  input_two_string(a, b);
  result = strcmp(a, b);
  output(a, b, result);
  return 0;
}