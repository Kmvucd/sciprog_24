#include <stdio.h>
#include <stdlib.h>
#define MAX_FILE_NAME 100
#include "magic_square.h"

int getlines(char filename[MAX_FILE_NAME]);

int main(){  

    	//define our file variable
    	FILE *f;  
    	char filename[MAX_FILE_NAME];
    	printf("Enter file name: ");
    	scanf("%s", filename);

    	// ##! n function which gets the number of lines
    	int n = getlines(filename);

    	// TODO: Open the file 
   	f = fopen(filename,"r");
   	// Checking the file opening
	if (!f)
    	{
	printf("Error opening file");
    	}

    	int i;
    	// TODO: Allocating a matrix for storing the magic square
    	int **matrix = (int **) malloc(n * sizeof(int*));  // Array of row pointers

    	for (i = 0; i < n; i++)
    	{
	matrix[i] = (int *) malloc(n * sizeof(int));// Alloting each rows
    	}

   	 // TODO:inputting integer data into the matrix;

	for (int i = 0; i < n; i++)
	{
	for (int j = 0; j < n; j++)
	{
	fscanf(f,"%d", &matrix[i][j]);
	}
	}

	// Check if matrix is magic square

	if(isMagicSquare(matrix,n))
	{
	printf("The given matrix is a magic square\n");
	}	
	else
	{
	printf("The given matrix is not a magic square\n");
	}

    	// TODO: Freeing each row separately before freeing the array of pointers
	// Freeing each row separately
	for (i = 0; i < n; i++)
	{
	free(matrix[i]);
	}	
	free(matrix);//Freeing matrix
   
 	// TODO:Close the file
	fclose(f);

    return 0;
}  

//##!

int getlines(char filename[MAX_FILE_NAME]) {
    FILE *fp;
    fp = fopen(filename, "r");
    
    int ch_read;
    int count = 0;

    while( (ch_read = fgetc(fp)) != EOF)
    {
        if (ch_read == '\n'){
            count++;
        }
    }

    printf("No. of lines =  %d\n", count);
    fclose(fp); 
    return count;
}
