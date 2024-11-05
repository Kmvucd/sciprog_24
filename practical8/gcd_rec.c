# include <stdio.h>

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
printf("Enter value of a:");
scanf("%d",&a);
printf("Enter value of b:");
scanf("%d",&b);
int result ; 
result = gcd(a,b);
printf("GCD is %d",result);

}
