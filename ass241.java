//write  a java which accept number from user and return the difference between  sum of even digits and sum of odd digits
//input:2395
//output:-15
//input:1018
//output:6
import java.util.*;

class digit
{
	int evensum=0,idigit=0,oddsum=0;
	 int diff(int ino)
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
				evensum=evensum+idigit;
			}
			else
			{
				oddsum=oddsum+idigit;
			}
			ino=ino/10;
		}
		
		return evensum-oddsum;	
	}

}	

class ass241
{
	public static void main(String arg[])
	{
	int no=0,ret=0;
	
	Scanner sobj=new Scanner(System.in);
	
	System.out.println("enter the number");
	no=sobj.nextInt();
	
	digit dobj=new digit();
	ret=dobj.diff(no);
	System.out.println("difference between sum of evendigit and odddigit is :"+ret);
	}	
}

