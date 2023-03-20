/*C program to print the pattern*/
#include<stdio.h>
void printing_pattern(int);
 //driver program
int main()  
{
    int rows;
    printf("Enter the number rows:");
    scanf("%d", &rows);
    printing_pattern(rows);
    return 0;
}          
void printing_pattern(int rows) 
{  /*Function for pattern printing logic*/
	int row;
    int col;
    int space;
	for (row = rows; row >= 1;--row) 
	{
		for (space = 0; space < rows -row; ++space) 
			printf(" ");
		for (col = row; col <= 2*row-1; ++col) 
			printf("* ");
		for (col = 0; col < row-1; ++col)
		       printf("* ");	      
		printf("\n");
	}
}

