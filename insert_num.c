/*Program to insert a number at a given position in an array*/
#include<stdio.h>
void insert_num(int *array, int number, int location, int size);
/*Main function*/
int main() {
	int array[100];/*Array declaration*/
	int i;
	int number;
	int location;
	int size;
	printf("Enter the size of the array:");
	scanf("%d", &size);
	printf("Enter the elements into an array:");
	for (i = 0; i <  size; i++) { /*loop for entering array elemets*/
		scanf("%d", &array[i]); 
		}
	printf("\n");
	for ( i = 0; i < size; i++) { /*Loop for displaying array elemets*/
		printf("%d ", array[i]);
		}
	printf("\n");
	printf("Enter an element to insert into an array:");
	scanf("%d", &number);
	printf("Enter the location to insert the element:");
	scanf("%d", &location);
	insert_num(array,number,location,size);
	return 0;
}
void insert_num(int *array, int number, int location, int size) 
{ /*function to insert a number at a given position*/
    int i;
    /*insert at specified location*/
    array[location - 1] =  number;
    printf("Updated array:");
    for (i = 0; i < size; i++) 
	{
        printf("%d ", array[i]);
    }
    printf("\n");
} 
