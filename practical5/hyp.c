#include <stdio.h>
#include <math.h>
// function declaration
double artanh1(double x, double delta);
double artanh2(double x);
int compare(double p, double q);
int main()
{
double a;
double b;
double out;
double mc[200], nl[200];
printf("Enter a positive number: ");
scanf("%lf",&a);
if (a<0)
{
printf("Please enter non negative number!");
}
else
{
for (int i = 0; i<=180; i++)
{
b = -0.9 + (i * 0.01);
mc[i] = artanh1(b,a);
printf("%s\n",compare(mc[i],nl[i]) ? "Yes":"No");
}
}
}

double artanh1(double x, double delta)
{
double term =x;
double result = term;
int i = 1;
while(fabs(term)> delta)
{
term = (pow(x, 2 * i + 1)/(2 * i + 1));
result += term;
i++;
}
return result;
}
// function definition to find values from natural algorithm
double artanh2(double x)
{
double a = 0.5, res;
res = a *(log(1+x)-log(1-x)); 
return res;
}
// function definition to compare values from two comparitives
int compare(double p, double q)
{
p = round(p * 1e10)/1e10;
q = round(q * 1e10)/1e10;
return fabs(p-q) < 1e-10 ;
}
