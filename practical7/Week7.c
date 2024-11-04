#include <stdio.h>
#include <stdlib.h>

double* allocatearray(int n);
void fillwithones(double* x, int n);
void printarray(double* y, int n);
void freememory(double* x);
double estimated (double x, int order);

int main()
{
	double x = 1.0;
	for (int i =0; i < 15;i++)
	{
	double estimate = estimated(x, i);
	printf("Order: %d, Estimated value is %.10f\n",i, estimate);
	}
	return 0;
}
 
double* allocatearray(int n)
{
return (double*) malloc(n * sizeof(double));
}

void fillwithones(double* x, int n)
{
for (int i =0; i<n; i++)
{
x[i] = 1.0;
}
}
 
void printarray(double* x, int n)
{
for (int i = 0; i<n; i++)
{
printf("%f",x[i]);
}
printf("\n");
}

void freememory(double* x)
{
free(x);
}

double estimated(double x, int order)
{
double* array = allocatearray(order+1); 
double sum = 0.0;
for (int i = 0; i <= order; i++)
{
double term = 1.0;
for (int j =1; j<=i; j++)
{
 term *= x/j;
}
array[i] = term;
sum+= array[i];
}
freememory(array);
return sum;
}

