/*Program to add matrices*/
#include<stdio.h>
void matrix_addition(int first[10][10], int second[10][10], int result[10][10], int row, int col);
void read_matrix(int matrix[10][10], int row, int col);
void display_matrix(int matrix[10][10], int row, int col);
/*main function*/
int main() 
{
    int first[10][10];
    int second[10][10];
    int result[10][10];
    int row,col;
    printf("Enter row and column sizes:");
    scanf("%d %d", &row, &col);
    //read matrix A and B
    printf("Enter matrix-1 elements:");
    read_matrix(first,row,col);
    printf("Enter matrix-2 elements:");
    read_matrix(second,row,col);
    //add both matrix A and B
    matrix_addition(first,second,result,row,col);
    printf("Resultant matrix:\n");
    display_matrix(result,row,col);
    return 0;
}
/*function to add matrices*/
void matrix_addition(int first[10][10], int second[10][10], int result[10][10], int row, int col) {
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			result[i][j] = first[i][j] + second[i][j]; /*add & store to matrix result*/
		}
	}
}
/*Function to read matrix*/
void read_matrix(int matrix[10][10], int row, int col) {
	for (int i =0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			scanf("%d", &matrix[i][j]);
		}
	}
}
/*function to display matrix*/
void display_matrix(int matrix[10][10], int row, int col) {
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j <col; ++j) {
			printf("%d ",matrix[i][j]);
		}
	 	printf("\n");
	}
}
