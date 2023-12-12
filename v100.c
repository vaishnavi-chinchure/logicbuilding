//accept charracter from user and display its ascii value in decimal octal and hexadecimal format.

#include<stdio.h>
void display(char c)
{
   printf("decimal : %d\n",c);
   printf("octal   : %o\n",c);
   printf("hexadecimal: %x\n",c);
}

int main()
{
	char ch='\0';
	printf("enter the charracter");
	scanf("%c",&ch);
	display(ch);
	return 0;
}