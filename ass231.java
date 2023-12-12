//write a java program which accept string from user and diplay it in a reverse order
//input:abcd
//output:dcba
import java.util.*;

class StringX
{
	public static void reverse(String str)
	{
		//String strx="";
		char arr[]=sobj.toCharArray();
		for(int i=arr.length-1;i>=0;i--)
		{
			//strx+=str[i];
			System.out.println("string is :"+str[i]);
		}
	}
	//return strx;
	
	
}	
class ass230
{
	public static void main(String arg[])
	{
		
		Scanner sobj=new Scanner(System.in);
		System.out.println("enter the string");
		String str=sobj.nextLine();
		StringX bobj=new StringX();
		String=bobj.reverse(str);
		System.out.println(str);
		
	}
}