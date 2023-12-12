/*write a java program which accept string from user and return difference between frequency of small characters and frequency of 
of capital characters*/

import java.util.*;

class StringX
{
	public int countdiff(String str)
	{
		char arr[]=str.toCharArray();
		int icnt1=0,icnt2=0;
		for(int i=0;i<arr.length;i++)
		{
			if((arr[i]>='A')&&(arr[i]<='Z'))
			{
				icnt1++;
			}
			else
			{
				icnt2++;
			}
		}
		return icnt1-icnt2;
	}
}


class ass229
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("enter the string");
		String str=sobj.nextLine();
		StringX bobj=new StringX();
		int ret=bobj.countdiff(str);
		System.out.println("difference between capital letters and small letters:"+ret);
		
		
	}
}