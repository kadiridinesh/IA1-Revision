#include<stdio.h>
typedef struct complex
{
    int real, imaginary;
}Complex;
Complex input()
{
    Complex num;
    printf("Enter the Real Part: ");
    scanf("%d",&num.real);
    printf("Enter the Imaginary Part: ");
    scanf("%d",&num.imaginary);
    printf(" The Complex Number is %d + %di \n ",num.real,num.imaginary);
    return num;
}
Complex add (Complex a, Complex b)
{
    Complex sum;
    sum.real=a.real+b.real;
    sum.imaginary=a.imaginary+b.imaginary;
    return sum;
}
void output(Complex a, Complex b, Complex Sum)
{
    printf("Sum of %d + %di and %d + %di is %d + %di \n",a.real,a.imaginary,b.real,b.imaginary,Sum.real,Sum.imaginary);
}
int main()
{
    Complex num1,num2,Sum;
    num1=input();
    num2=input();
    Sum= add(num1,num2);
    output(num1,num2,Sum);
    return 0;
}