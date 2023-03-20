/*Program to delete a number at a given location in an array*/
#include<stdio.h>
int delete_num(int *array, int location, int size);
/*main function section*/
int main() 
{
	int array[50]; /*array declaration*/
	int location;
	int i;
	int size;
	printf("\nEnter the size of the array");
	scanf("%d", &size);
	printf("\nEnter the elements into the array:");
	for (i = 0; i < size; i++) {
		scanf("%d\n", &array[i]);
		} 
	printf("\nenter location to be deleted");
	scanf("%d", &location);
	delete_num(array,location,size);
	return 0;
}
int delete_num(int *array, int location, int size)  /*function to delete the number at a location in an array*/
{
    int i;
    /*checking whether deletion is possible or not*/
    if (location >= size + 1) 
	{
        printf("\n Deletion is not possible in the array:");
    } else {
            	/*use for loop to delete the element and update the index*/
            	for (i = location - 1; i <  size - 1; i++) 
				{	
                	array[i] =  array[i+1];
            	}	
            	printf("\nThe updated array:\n");
            	for (i = 0;i < size - 1; i++) 
				{
                	printf("%d\n", array[i]);
       			}
		}
}	
