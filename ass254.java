//write  a java which accept number from user and return the count  of digits in between 3 and 7
//input:2395
//output:1
//input:1018
//output:0
import java.util.*;

class digit
{
	int count=0,idigit=0;
	 int count(int ino)
	{
		if(ino<0)
		{
			ino=-ino;
		}
		while(ino!=0)
		{
			idigit=ino%10;
			if((idigit>=3)&&(idigit<=7))
			{
				count++;
			}
			ino=ino/10;
		}
		
		return count;	
	}

}	

class ass254
{
	public static void main(String arg[])
	{
	int no=0,ret=0;
	
	Scanner sobj=new Scanner(System.in);
	
	System.out.println("enter the number");
	no=sobj.nextInt();
	
	digit dobj=new digit();
	ret=dobj.count(no);
	System.out.println("count of digits in between 3 and 7 is :"+ret);
	}	
}

