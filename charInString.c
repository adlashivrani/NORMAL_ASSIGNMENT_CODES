/*program that takes a character and a string as the input,
 checks whether the character is present in the string,
appends the character and frequency count at the end of string:*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void charInString( char *str, char ch); /*function declaration*/ 
/*main function*/
int main() 
{
	char str[100];
	int i;
	char ch;
	printf("\nEnter the string:");
	gets(str);
	printf("Enter the character to count");
	scanf("%c", &ch);
	charInString(str,ch);
	return 0;
}
void charInString(char *str, char ch) /*Function definition*/ 
{
	int count = 0;
	int i;
	for (i = 0; i <= strlen(str); i++) 
	{
		if(str[i] == ch) //char compare
		{
			count++;
		}
	}
	printf("\nThe resultant string:%s%c%d", str, ch, count);
}

