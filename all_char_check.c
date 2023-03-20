/*Program to check whether all the characters in the first string are also present in the second string*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define CHAR_SIZE 26
void all_char_check( char *str, int array[]);
void create(char *str, int array[]);
/*main function*/
int main() 
{
	char str1[50];
	char str2[50];
	int array1[CHAR_SIZE] = {0};
	int array2[CHAR_SIZE] = {0};
	int i;
	char str1_alpha[CHAR_SIZE];
	char str2_alpha[CHAR_SIZE];
	printf("Enter string1:");
	scanf("%s", str1);
	printf("Enter string2:");
	scanf("%s", str2);
	all_char_check(str1,array1);
	all_char_check(str2,array2);
	create(str1_alpha,array1);
	create(str2_alpha,array2);
	if (strcmp(str1_alpha, str2_alpha) == 0) 
	{
		printf("All characters match in %s and %s.\n", str1, str2);
	} else {
				printf("All characters do not match in %s and %s.\n", str1, str2);
			}
	return 0;
}
	
 
void all_char_check( char *str, int array[]) /*function to check all the characters*/
{
     int i;
     int index;
     for (i = 0; i < strlen(str); i++)
     {
         str[i] = tolower(str[i]);
         index = str[i] - 'a';
         if (!array[index])
         {
             array[index] = 1;
         }
     }
}
void create(char *str, int array[]) /*function to create string*/
{
     int i;
     int j = 0;
     for (i = 0; i < CHAR_SIZE; i++)
     {
         if (array[i])
         {
             str[j++] = i + 'a';
         }
     }
     str[j] = '\0';
}
