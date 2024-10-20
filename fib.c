#include <stdio.h>
// Function declaration with input as pointer
void fib(int *x, int *y);

int main()
{
int a, f0 = 0, f1 = 1;

printf("Enter the value: ");
scanf("%d",&a);

if (a == 0)
{
printf("Fibonacci series is %d",f0);
}
else 
{
printf("Fibonacci series is %d %d ",f0,f1);
}
// Looping to pass values till a
for (int i = 2; i<=a; i++)
{
fib(&f0,&f1);
}
return 0;
}

// function to generate fibonacci series
void fib(int *x, int *y)
{
int temp = *x;
*x = *y;
*y = temp + (*x);
printf("%d ",*y);
}

