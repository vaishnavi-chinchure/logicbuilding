//write  a java which accept number from user and return the count  of even digits
//input:2395
//output:1
//input:1018
//output:2
import java.util.*;

class digit
{
	int count=0,idigit=0;
	 int counteven(int ino)
	{
		if(ino<0)
		{
			ino=-ino;
		}
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

class ass237
{
	public static void main(String arg[])
	{
	int no=0,ret=0;
	
	Scanner sobj=new Scanner(System.in);
	
	System.out.println("enter the number");
	no=sobj.nextInt();
	
	digit dobj=new digit();
	ret=dobj.counteven(no);
	System.out.println("even count is :"+ret);
	}	
}

