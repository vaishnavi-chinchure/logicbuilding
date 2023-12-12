//write ajava program which accept string from user and count number of small letters
//input:"marvellous multi OS"
//9
import java.util.*;

class StringX
{
	public int countcapital(String str)
	{
		char arr[]=str.toCharArray();
		int icnt=0;
		for(int i=0;i<arr.length;i++)
		{
			if((arr[i]>='a')&&(arr[i]<='z'))
			{
				icnt++;
			}
		}
			return icnt;
	}
	

}
class ass228
{
	public static void main(String arg[])
	{
		
	Scanner sobj=new Scanner(System.in);
	System.out.println("enter the string");
	String str=sobj.nextLine();
	StringX bobj=new StringX();
	int iret=bobj.countcapital(str);
	System.out.println("number of capital letters are:"+iret);
	}
   	
}