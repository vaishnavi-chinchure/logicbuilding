//write a java program which accept number from user and return the count of odd digits
//input:2395
//output:1
//input:1018
//output:2
import java.util.*;
class digits
{
		 int countodd(int ino)
		{   
			int idigit=0,count=0;
			while(ino!=0)
			{
				idigit=ino%10;
				if(idigit%2!=0)
				{
					count++;
				}
				ino=ino/10;
			}
			return count;
		}
}
	class ass253
	{
	public static void main(String arg[])
	{
		int ino=0,ret=0;
		Scanner sobj=new Scanner(System.in);
		System.out.println("enter the number");
		ino=sobj.nextInt();
		digits dobj=new digits();
		ret=dobj.countodd(ino);
		System.out.println("countof odd digits are"+ret);
		
	}
}