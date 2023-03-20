/*Program to find whether the array of integers contains duplicate elements*/
#include<stdio.h>
int duplicate_elements(int *array ,  int size);
/*main function*/
int main() {
	int array[10];
	int i;
	int size;
	printf("Enter size of array:");
	scanf("%d", &size);
	printf("\nEnter elements in array:\n");
	for (i = 0; i < size; i++) {
		printf("\nElement -%d:",i + 1);
		scanf("%d", &array[i]);
		}
	duplicate_elements(array,size);
	return 0;
} 
int duplicate_elements(int *array ,  int size) 
{
    int i;
	int j;
    printf("duplicate elements in the array:");
    for (i = 0; i < size; i++) 
	{
        if ( array[i]!=-1)  
		{
            for (j = i + 1; j < size; j++) 
			{
                if (array[i] == array[j]) 
				{
                    printf("%d\n",array[j]);
                }
            }
        }
    }
}			
