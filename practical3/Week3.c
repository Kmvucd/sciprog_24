#include <stdio.h>
#include <math.h>

int main()
{
float a = 0.0;
float pi = 3.14159265358979323846;
float b = pi/3;
printf("b value is %f\n", b);
float loop = b/11;
float output;
float mul;
float  sum = 0.0;
sum = tan(a)+tan(b);
for (int i = 1; i<11; i++)
{
float x = (i*loop);
sum = sum + 2*(tan (x));
printf("i value is %d\n", i);
}
mul = b/(2*11);
output = mul * sum;
printf("Output from formula is %f\n", output);
printf("Log of 2 value is %f\n", log(2));
return 0;
}
