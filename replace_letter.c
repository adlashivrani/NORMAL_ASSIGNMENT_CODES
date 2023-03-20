/*search letter 'a' and replace it with letter 'k' in a string*/
#include<stdio.h>
#include<string.h>
void replace_letter(char *string);
/*driver program*/
int main() 
{
    char string[200] ;
    printf("Enter a string: ");
    scanf("%s", string);
    printf("\nBefore replace:%s", string);
    replace_letter(string);
    return 0;
}
void replace_letter(char *string) /*function to replace a string char*/
{
	/*replacing with specific character*/
	int i = 0;
	while(string[i]!='\0') {
		if (string[i] == 'a') { 
			string[i] = 'k';
		}
		i++;
	}
	printf("After replacement:%s\n", string);
}
