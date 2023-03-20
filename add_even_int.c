/*add only even integers in an array of integers*/
#include<stdio.h>
void add_even_int(int *array);
/*driver program*/
int main() {
	int i;
	int array[20];
	printf("Enter upto 5 values: ");
	for( i = 0; i< 5; i++)
		scanf("%d", &array[i]);
	add_even_int(array);
	return 0;
}
void add_even_int(int *array)/*function to add even integers*/
{
	int i;
	int sum = 0;
	for (i = 0; i < 5; i++) 
	{
		if (array[i] % 2 == 0) 
			sum = sum + array[i];
	}
	printf("Total sum of even values is:%d", sum);
}
