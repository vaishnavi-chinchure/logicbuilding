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
	public boolean strcmpx(String src,String dest,int icnt)
	{
		char ch[]=dest.toCharArray();
		String m=new String();
		for(int i=0;i<icnt;i++)
		{
			m=m+ch[i];	
		}
		char c[]=src.toCharArray();
		String n=new String();
		for(int i=0;i<icnt;i++)
		{
			n=n+c[i];	
		}
		if(m.equals(n))
		{
			return true;
		}
		else
		{
			return false;
		}
		
	}
	
}	
class ass259
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("enter first string");
		String src=sobj.nextLine();
		System.out.println("enter second string");
		String dest=sobj.nextLine();
		
		System.out.println("enter  no");
		int no=sobj.nextInt();
		
		stringdemo dobj=new stringdemo();
		
		boolean ret=dobj.strcmpx(src,dest,no);
		if(ret==true)
		{
			System.out.println("yes");
		}
		else
		{
			System.out.println("no");
		}
	}
}