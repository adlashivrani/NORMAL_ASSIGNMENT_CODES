/*sum of digits of given number*/
#include<stdio.h>
void sum_of_digits(int num);
//driver program
int main() 
{
    int num;
    printf("Enter an integer number \n");
    scanf("%d", &num);
    sum_of_digits(num);
    return 0;
}        
void sum_of_digits(int num) 
{ /*function for sum of digits operation*/
	int temp;
	int sum = 0;
	while (num > 0) 
	{
		temp = num % 10;
		sum = sum + temp;
		num = num / 10;
	}
	printf("Sum of the digits :%d", sum);
}
