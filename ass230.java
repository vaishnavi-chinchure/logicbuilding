//write a java program which accept string from user and check it contains vowel in it or not
//input:marvellous
//output:true
//input:xyz
//output:false
import java.util.*;
class StringX
{
	public boolean chkvowel(String str)
	{
		char arr[]=str.toCharArray();
		for(int i=0;i<arr.length;i++)
		{
			if((arr[i]=='a')||(arr[i]=='e')||(arr[i]=='i')||(arr[i]=='o')||(arr[i]=='u'))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		return true;
	}
	
}	
class ass230
{
	public static void main(String arg[])
	{
		boolean bret=false;
		Scanner sobj=new Scanner(System.in);
		System.out.println("enter the string");
		String str=sobj.nextLine();
		StringX bobj=new StringX();
		bret=bobj.chkvowel(str);
		if(bret==true)
		{
			System.out.println("vowels are present");
		}
		else
		{
			System.out.println("vowels are not present");
		}
	}
}