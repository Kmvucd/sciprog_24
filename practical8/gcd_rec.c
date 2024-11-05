# include <stdio.h>
// Function to calculate gcd using recursive approach
int gcd(int a,int b)
{
if (b == 0)
{
return a;
}
else
{
return gcd(b, a%b);
}
}

int main()
{
int a, b;
printf("Enter value of a:");//Declaring a variable
scanf("%d",&a);
printf("Enter value of b:"); //Declaring b variable
scanf("%d",&b);
int result ; 
result = gcd(a,b); // calling gcd function
printf("GCD is %d",result);

}
