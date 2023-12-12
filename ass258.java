/*write a java program  which accept 2 strings from user and check wether contents of twostrings are equal or not
input:"marvellous infosystems logic"
       "marvellous infosystems logic"*/

import java.util.*;
class stringdemo
{
	public boolean strcmpx(String src,String dest)
	{
		if(src.equals(dest))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
}	
class ass258
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("enter first string");
		String src=sobj.nextLine();
		System.out.println("enter second string");
		String dest=sobj.nextLine();
		
		stringdemo dobj=new stringdemo();
		
		boolean ret=dobj.strcmpx(src,dest);
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