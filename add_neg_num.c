/*sum of all the negative numbers*/
#include<stdio.h>
int add_neg_num(int array[]);
/*driver program*/
int main() 
{
	int array[50];
	for ( int i = 0; i < 5; i++)
	{
		printf("\n enter a number: ");
		scanf("%d", &array[i]);
	} 
	add_neg_num(array);
	return 0;
}
int add_neg_num(int array[])/*function for additing negative numbers*/
{ 
	int sum = 0;
    for (int i = 0; i < 5; i++) 
	{
         if (array[i] % 2 == 1)
               sum = sum + array[i];
    }
    printf("\n sum of negative numbers is:%d", sum);
 }
