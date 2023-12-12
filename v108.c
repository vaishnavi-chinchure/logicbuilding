 //write a program which accept string from user and toggle the case.
 //input:Marvellous Multi OS
 //output:mARVELLOUS mULTI os
 #include<stdio.h>
 
 int toggle(char *str)
 {
	 while(*str!='\0')
	 {
		 if(*str>='A'&&*str<='Z')
		 {
			 *str=*str+32;
		 }
		 else if(*str>='a'&&*str<='z')
		 {
			 *str=*str-32;
		 }
		 *str++;
	 }
	 return *str;
	 
	 
 }
 
 
 int main()
 {
	 char str[49];
	 printf("enter the string");
	 scanf("%[^'\n']s",str);
	 toggle(str);
	 printf("%s",str);
	 return 0;
	 
 }