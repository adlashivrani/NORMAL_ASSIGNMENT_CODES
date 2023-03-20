/*Enter n numbers in an array and redisplay array with elements being sorted in ascending order*/
#include<stdio.h>
int array_asc_order(int *array, int size);
/*main function section*/
int main() 
{
     int i;
	 int size;
	 int array[30];
     printf("Enter the size of array:");
     scanf("%d", &size);
     printf("enter the numbers:");
     for ( i = 0; i < size; ++i)
         scanf("%d", &array[i]);
     array_asc_order(array,size);
     return 0;
}
int array_asc_order( int *array , int size) /*function for arranging array in acsending order*/
{
	int i;
	int j;
	int temp;
	for (i = 0; i < 5; ++i)
	{
		for ( j = i + 1; j < size; ++j) 
		{
			if ( array[i] > array[j]) 
			{
				temp =  array[i] ;
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	printf("numbers arranged in ascending order:");
	for ( i = 0; i < size; ++i) 
		printf("%d  ", array[i]);
}
