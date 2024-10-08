#include <stdio.h>
#include <math.h>

double conversion (int degrees);
double area (int x);
double a[13];

int main()
{
for (int i=0; i<13; i++)
{
int degrees = i*5;
double b = conversion(degrees);
a[i] = tan(b);;
}
double area_1 = area(13);
printf("Area is %lf\n", area_1);
return 0;
}

double conversion (int degrees)
{
double rad;
rad = degrees * M_PI/180.0;
return rad;
}

double area (int x)
{
double sum = 0.0;
double h = M_PI/180.0*5;
for (int i=0; i<x-1; i++)
{
sum += (a[i]+a[i+1])*h/2;
}
return sum;
}
