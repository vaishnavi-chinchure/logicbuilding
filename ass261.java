/*write a java program  which accept one strings from user and check wether the string is palliendromeor not without
considering its case
input:"1abccBA1"
output:true*/  


import java.util.*;
class stringdemo
{
	public boolean palliendrome(String src)
	{
		
		String reversestr=new String();
		char[] ch=src.toCharArray();
		String rstr=new String();
		for(int i=ch.length-1;i>=0;i--)
		{
			rstr=rstr+(ch[i]);
		
		}
		System.out.println(rstr);
		if((rstr).equals(src))
		{
			return true;
		}
		else
		{
			return false;
		}
		
		
	}
	
}	
class ass261
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("enter  string");
		String src=sobj.nextLine();
		stringdemo dobj=new stringdemo();
		boolean bret=dobj.palliendrome(src);
		if(bret==true)
		{
			System.out.println("palliendrome");
		}
		else
		{
			System.out.println("not palliendrome");
		}
	}
}