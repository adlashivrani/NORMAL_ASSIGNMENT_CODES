/*Program to compare two strings*/
#include<stdio.h>
#include<string.h>
void compare_strings(char string1[20] , char string2[20]);
/*Main function*/
int main() {
	char string1[20];
	char string2[20];
	printf("Enter the first string:");
	scanf("%s", string1);
	printf("Enter the second string:");
	scanf("%s", string2);
	compare_strings(string1,string2);
	return 0;
}
void compare_strings(char string1[20] , char string2[20]) 
{ /*Function to compare two sttings*/
    if (strcmp(string1, string2) == 0) 
	{ //condition to check whether these strings are equal or not*/
         printf("Both strings are equal");
    } else {
             printf("Strings are not equal");
           }
}
