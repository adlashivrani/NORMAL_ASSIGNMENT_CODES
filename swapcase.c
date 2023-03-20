/* C program to swap numbers using bitwise operator  */
#include <stdio.h>
void swapcase(int,int);
int main()
{
	int number1;
	int number2;
	printf("Enter numbers to swap:");
	scanf("%d%d", &number1, &number2);
	swapcase(number1,number2);
	return 0;
}
void swapcase(int number1,int number2)
{
    printf("numbers before swaping: number1=%d,number2=%d\n", number1, number2);
    number1 = number1 ^ number2;
    number2 = number1 ^ number2;
    number1 = number1 ^ number2;
    printf("numbers after swaping: number1=%d,numbers=%d", number1, number2);
}

