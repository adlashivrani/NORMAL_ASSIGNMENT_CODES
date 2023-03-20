/*Program that capitalizes first letter of every word in  a given sentence*/
#include<stdio.h>
void char_uppercase(char *str);
/*Main function*/
int main() 
{
	char str[100];
	printf("Enter a sentence");
	scanf("%[^\n]s", str);//reads strings with spaces
	char_uppercase(str);
	return 0;
}
void char_uppercase(char *str) 
{
	int i;
	/*capitalize first char of words*/
	for ( int i = 0; str[i]!= '\0'; i++) 
	{
		/*check whether first char is lowercase alphabet*/
		if ( i == 0) 
		{
			if (str[i] >= 'a' && str[i] <='z') 
			{
				str[i] = str[i] - 32;// substract 32 to make it capital
			}
			continue;
		}
		if (str[i] == ' ') 
		{	
			++i;
			/*if space or comma found,check next char*/
				if (str[i] >= 'a' && str[i] <= 'z') 
				{	
					str[i] =str[i] - 32;//substract 32 to make it capital
					continue;
				}
		} else {
					//all other uppercase characters should be in lowercase
					if (str[i] >= 'A' && str[i] <= 'Z') 
					{
						str[i] = str[i] + 32;//add 32 to make it lowercase
					}	
				}
	}
	printf("Final string:%s\n", str);
}  
