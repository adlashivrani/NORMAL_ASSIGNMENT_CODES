/*Program to remove all negative integers in an array*/
#include<stdio.h>
void remove_neg_num(int array[], int *p, int *q);
/*main function*/
int main() 
{
	int array[50];
	int i = 0;
	int *p;
	int *q;
	p = array;
	q = array + 5;
	printf("Enter 5 elements into array:");
	for (i = 0; i < 5; i++) 
	{
		scanf("%d", &array[i]);
	}
	remove_neg_num(array,p,q);
	printf("Resultant:");
	for (i =0; i < 5; i++) 
	{
		if (array[i]!=0) 
		{
			printf("%d ",array[i]);
		}
	}
	printf("\n");
	return 0;
} 
void remove_neg_num(int array[], int *p, int *q) 
{
    int *x;
    x = &array[0];/*let x point to the first thing in array*/
    while (p <= q) 
	{  //continue while p points to an address before q
        if (*p >= 0) 
		{  //if the thing pointed by p is greater than zero
            *x = *p;
            x++;
        }
        p++;
    }
    for ( ; x <= q; x++) 
	{ //while x is less than q
        *x = 0;
    }
}
