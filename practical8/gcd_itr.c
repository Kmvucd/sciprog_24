# include <stdio.h>

int main()
{
int a, b;//Declaring variables
printf("Enter values of a:");
scanf("%d", &a); // Input variable
printf("Enter values of b:");
scanf("%d", &b); // Input variable
// Calculating GCD
while(b != 0)
{
int temp = b;
b = a%b;
a = temp;
}
printf("GCD is %d", a);//printing output
}
