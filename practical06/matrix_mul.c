#include <stdio.h>
#define n 5
#define p 3
#define q 4

void matmul(double X[n][p], double Y[p][q],double Z[n][q]);

int main()
{
double A[n][p], B[p][q], C[n][q];
// Initialize matrix A
printf("A elements are :\n");
for(int i = 0; i<n; i++)
{
for (int j = 0; j<p; j++)
{
A[i][j] = i+j;
printf("%3.0lf",A[i][j]);
}
printf("\n");
}
printf("\n");
printf("B elements are :\n");
// Initialize matrix B
for (int i = 0; i<p; i++)
{
for (int j = 0; j<q; j++)
{
B[i][j] = i-j;
printf("%3.0lf",B[i][j]);
}
printf("\n");
}
printf("\n");
printf("C elements after A and B multiplications are :\n");
// Initialize matrix C
for (int i = 0; i<n; i++)
{
for (int j = 0; j<q; j++)
{
C[i][j] = 0.0;
}
}
matmul(A,B,C);
}

// function definition to multiply matrices
void matmul(double X[n][p], double Y[p][q], double Z[n][q])
{
for (int i = 0; i<n; i++)
{
for (int j = 0; j<q; j++)
{
for (int k = 0; k<p; k++)
{
Z[i][j] += X[i][k] * Y[k][j];
}
printf("%3.0lf",Z[i][j]);
}
printf("\n");
}
}
