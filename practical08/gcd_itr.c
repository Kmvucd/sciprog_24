# include <stdio.h>

// Function to define gcd
int gcd(int a, int b)
{
while(b != 0)
{
int temp = b;
b = a%b;
a = temp;
}
return a;
}

int main()
{
int a, b;//Declaring variables
printf("Enter values of a:");
scanf("%d", &a); // Input variable
printf("Enter values of b:");
scanf("%d", &b); // Input variable
// Calculating GCD
int res = gcd(a,b);
printf("GCD of %d and %d is %d", a, b, res);//printing output
}
