#include <stdio.h>
#include <math.h>

/*Defining all functions*/
double conversion (int degrees);
double area (int x);
#define N 13
double a[N];

int main()
{
/*Looping all intervals to get radians values*/
for (int i=0; i<N; i++)
{
int degrees = i*5;
double b = conversion(degrees);
a[i] = tan(b);;
}
double area_1 = area(N);
printf("Area is %lf\n", area_1);
return 0;
}
/*Function to convert degrees into radians*/
double conversion (int degrees)
{
double rad;
rad = degrees * M_PI/180.0;
return rad;
}
/*Function to calculate area for intervals*/
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
