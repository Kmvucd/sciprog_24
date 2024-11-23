#include <stdio.h>
// Checks if a matrix is a magic square.
// A magic square is an n-sided matrix whose sum of values for each
// row, column, main and secondary diagonals equals to n(n^2 + 1)/2.
// The function takes as input a matrix 'square' and its side length 'n'
// and outputs 0 if 'n' is negative or 'square' is NOT a magic square;
// otherwise, outputs a non-zero value
//


int isMagicSquare(int ** square, const int n) {

    // Eliminate the case where 'n' is negative
    if(n < 0) {
        return 0;
    }

    // M is the sum of every row, column,
    // and the main and secondary diagonals
    int M = (n * (n*n + 1))/2;

    int i, j;
    // TODO: Checking that every row and column add up to M
    for (int i =0; i < n; i++)
    {
	int rsum = 0;
	int csum = 0;
	for (j =0; j < n; j++)
	{
		rsum += square[i][j];
		csum += square[i][j];
	}
	if (rsum != M || csum != M)
	{
	return 0; // Not a magic square
	}
    }
    int main_diag = 0, sec_diag = 0;
    // TODO: Checking that the main and secondary
    for (int i = 0; i < n; i++)
    {
	main_diag += square[i][i];
    }

    for (int i = 0; i < n; i++)
    {
	sec_diag += square[i][n-1-i];
    }
    // diagonals each add upto M
    if (main_diag != M || sec_diag != M)
    {
	return 0;	// Not a magic square
    }
    // If passed all checks, it is a magic square
    return 1; // passed
}

