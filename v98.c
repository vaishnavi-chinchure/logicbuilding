//accept character from user .if it is capital then display all the characters from the input characters 
//till 'z'if input charcter is smallthen print all the charcters in reverse order till a in other
// cases return directly.
#include<stdio.h>
void display(char c)
{
	int j=0;
	int k=0;
	if(c>=65&&c<=92)
	{
		for(j=c;j<=90;j++)
		{
			printf("%c\t",j);
		}
	}
	else if(c>=97&&c<=122)
	{
		for(k=c;k>=97;k--)
		{
			printf("%c\t",k);
		}
	}
}


int main()
{
	char ch='\0';
	printf("enter charracter");
	scanf(" %c",&ch);
	display(ch);
	return 0;
	
}