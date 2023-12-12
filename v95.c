//accept division of student from user and depends on the division display exam timing there are four divisions 
// in school as A,B,C,D.exam of division A at 7AM,C at 9.20AM,B at 8.30 am and D at 10.30am
//(application should be case insensitive)

#include<stdio.h>
void display(char ch)
{
	if(ch=='A')
	{
		printf("exam of division A at 7AM");
	}
	else if(ch=='B')
	{
		printf("exam of division A at 9:20AM");
	}
	else if(ch=='C')
	{
		printf("exam of division A at 8:30AM");
	}
	else if(ch=='D')
	{
		printf("exam of division A at 10:30AM");
	}
}


int main()
{
	char ch='\0';
	printf("enter the charracter");
	scanf("%c",&ch);
	display(ch);
	return 0;
}