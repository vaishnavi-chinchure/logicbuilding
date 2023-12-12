/*write a java program  which accept one strings from user and reverse the contents of that
 string by toggeling the case
input:"aCBdef"
output:"FEDbcA"*/

import java.util.*;
class stringdemo
{
	public void togglereverse(String src)
	{
		char s[]=src.toCharArray();
		String str=new String();

		String reversestr=new String();
	    
		for(int i=0;i<s.length;i++)
		{
			if(s[i]>='A'&&s[i]<='Z')
			{
				s[i]=(char)((int)s[i]+32);
			}
			else if(s[i]>='a'&&s[i]<='z')
			{
				s[i]=(char)((int)s[i]-32);
			}
		}
		for(int j=0;j<s.length;j++)
		{
			str=str+(s[j]);
			
		}
		System.out.println("toggled string:"+str);
		
		char[] ch=str.toCharArray();
		String rstr=new String();
		for(int i=ch.length-1;i>=0;i--)
		{
			rstr=rstr+(ch[i]);
			//System.out.print(ch[i]);
		}
		
		System.out.println("reverse string is:"+rstr);
		
	}
	
}	
class ass260
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("enter  string");
		String src=sobj.nextLine();
		stringdemo dobj=new stringdemo();
		dobj.togglereverse(src);
	}
}