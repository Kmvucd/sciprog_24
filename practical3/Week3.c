#include <stdio.h>
#include <math.h>

int main()
{
float a = 0.0;
float b = M_PI/3;
printf("b value is %f\n", b);
float loop = b/11;
float output;
float mul;
float  sum = 0.0;
/*adding first and last interval tan value*/
sum = tan(a)+tan(b);
/* Looping in between intervals and multiplying with 2 and additing it to the sum variable*/
for (int i = 1; i<11; i++)
{
float x = (i*loop);
sum = sum + 2*(tan (x));
printf("i value is %d\n", i);
}
/*Multiplying the output with (b-a/2n)*/
mul = b/(2*11);
/* The final output with multiplication of two variables*/ 
output = mul * sum;
printf("Output from formula is %f\n", output);
printf("Log of 2 value is %f\n", log(2));
return 0;
}
