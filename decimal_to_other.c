/*Program to convert a decimal number to binary,octal or hexadecimal*/
#include<stdio.h>
void decimal_to_other(int , int); /*function declaration*/
int main() {
	int num;
	printf("Enter a decimal number:");
	scanf("%d", &num);
	printf("\nBinary number::");
	decimal_to_other(num , 2);
	printf("\n Octal number::");
	decimal_to_other(num , 8);
	printf("\nHexadecimal number::");
	decimal_to_other(num , 16);
	printf("\n");
	return 0;
}
/*converting function*/
void decimal_to_other(int num , int base) {
	int reminder = num%base;
	if (num == 0)
		return;
	decimal_to_other( num/base , base );
	if (reminder < 10 )
		printf("%d", reminder);
	else
		printf("%c", reminder-10+'A' );
}
