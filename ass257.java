/*write a java program  which accept 2 strings from user and concat n characters of second string after first string
value of n should be accepted from user 
note:if third parameter is greater than the size of second string then concat whole string after first string.
input:"marvellous infosystems"
	  "logic building"
	  5              
output:"marvellous infosystems logic"*/

import java.util.*;
class stringdemo
{
	public  void strcatx(String src,String dest,int icnt)
	{
		
		char ch[]=dest.toCharArray();
		String m=new String();
		for(int i=0;i<icnt;i++)
		{
			m=m+ch[i];	
		}
		
		System.out.println(src+m);
	}
	
}	
class ass257
{
	public static void main(String arg[])
	{
		
		Scanner sobj=new Scanner(System.in);
		System.out.println("enter first string");
		String src=sobj.nextLine();
		System.out.println("enter second string");
		String dest=sobj.nextLine();
		System.out.println("enter the number");
		int ino=sobj.nextInt();
		stringdemo dobj=new stringdemo();
		
		dobj.strcatx(src,dest,ino);
	}
}