//write  a java which accept number from user and return the count  sum of digits
//input:2395
//output:270
//input:1018
//output:8
import java.util.*;

class digit
{
	int sum=0,idigit=0;
	 int sum(int ino)
	{
		if(ino<0)
		{
			ino=-ino;
		}
		while(ino!=0)
		{
			idigit=ino%10;

			
				sum=sum+idigit;
			
			ino=ino/10;
		}
		
		return sum;	
	}

}	

class ass240
{
	public static void main(String arg[])
	{
	int no=0,ret=0;
	
	Scanner sobj=new Scanner(System.in);
	
	System.out.println("enter the number");
	no=sobj.nextInt();
	
	digit dobj=new digit();
	ret=dobj.sum(no);
	System.out.println("sum of digits is :"+ret);
	}	
}

