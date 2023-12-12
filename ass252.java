//write a java program which accept number from user and return the count of even digits
//input:2395
//output:1
//input:1018
//output:2
import java.util.*;
class digits
{
		 int counteven(int ino)
		{   
			int idigit=0,count=0;
			while(ino!=0)
			{
				idigit=ino%10;
				if(idigit%2==0)
				{
					count++;
				}
				ino=ino/10;
			}
			return count;
		}
}
	class ass252
	{
	public static void main(String arg[])
	{
		int ino=0,ret=0;
		Scanner sobj=new Scanner(System.in);
		System.out.println("enter the number\n");
		ino=sobj.nextInt();
		digits dobj=new digits();
		ret=dobj.counteven(ino);
		System.out.println("countof even digits are"+ret);
		
	}
}