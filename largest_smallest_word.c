/*C program to find largest and smallest word in a sentence*/
#include<stdio.h>
#include<string.h>
void largest_smallest_word(char *string);
/*main function*/
int main() 
{
	char string[100];
	printf("Enter a string: ");
	scanf("%[^\n]s", string);
	largest_smallest_word(string);
	return 0;
}
void largest_smallest_word(char *string){
    int i = 0;
	int j = 0;
	int k = 0;
	int temp;
	int minIndex = 0;
	int maxIndex = 0;
	int max = 0;
	int min = 0;
    char substring[100][100] = {0};
	char c;
    while (string[k]!='\0')//for splitting string
    {   j = 0;
        while (string[k]!=' ' && string[k]!='\0')
        {
            substring[i][j] = string[k];
            k++;
            j++;
        }
        substring[i][j] = '\0';
        i++;
        if (string[k]!= '\0')
        {
            k++;
        }
    }
    int len = i;
    max = strlen(substring[0]);
    min = strlen(substring[0]);
    for (i = 0;i < len; i++)
    {
       temp = strlen(substring[i]);
       if (temp > max)  //finding index having max length
        {
            max = temp;
            maxIndex = i;
        }
        if (temp < min) //finding index having min length
        {
            min = temp;
            minIndex = i;
        }
    }
  printf("Largest Word: %s  Smallest word: %s ", substring[maxIndex], substring[minIndex]);
}
