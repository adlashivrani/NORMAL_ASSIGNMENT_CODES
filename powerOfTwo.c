/* Checking whether the given number is power of two*/
#include<stdio.h>
#include<math.h>
int powerOfTwo(int num);
/* Driver program */
int main() {
    int num;
    printf("Enter a number:");
    scanf( "%d", &num);
    powerOfTwo(num) ? printf("It is power of Two\n") : printf("It is not power of two\n");
    return 0;
}
int powerOfTwo(int num) /*Fuction to check if num is power or 2*/
{
	if ( num < 1 ) {
		return 0;
	}
	while ( num % 2 == 0 ) {
		num /= 2;
	}
	return num == 1;
} 

