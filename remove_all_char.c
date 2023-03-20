/*Program to remove all characters except alphabets in string*/
#include<stdio.h>
#include<string.h>
void remove_all_char(char *string);
/*Main function*/
int main() 
{
    char string[150];
    printf("Enter a string:");
    scanf("%s",string);
    printf("Output strings:");
    remove_all_char(string);
    return 0;
}                                                                                                                                                                                      
void remove_all_char( char *string)
{
	int i;
	int j;
	for (i = 0; string[i]!= '\0'; ++i) 
	{
		/*Enter loop if char is not an alphabet and not null character*/
		while (!((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z' || string[i] == '\0'))) 
		{
			for (j = i; string[j] != '\0'; ++j)
		    {
				/*If jth element of line is not an alphabet then assign value of (j+1)th to the jth element*/
				string[j] = string[j + 1];
			}
			string[j] = '\0';
		}
	}
	printf("Updated string:%s\n", string);
}
