//write a program which accept matrix from user and return the addition of diagonal elements
/*input:3 2 5 9
        4 3 2 2 
	    8 4 1 5 
	    3 9 7 5*/

import java.util.*;
import logic.array;

class dem extends array
{
	public dem(int irow,int icol)
	{
		super(irow,icol);
	}
	int maximum()
	{
		int isum=Arr[0][0];
		for(int i=1;i<Arr.length;i++)
		{
			for(int j=1;j<Arr[i].length;j++)
			{
				if(Arr[i]==Arr[j])
				{
					isum=isum+Arr[i][j];
				}
			}
		}
		return isum;
	}
}
class ass272
{
	public static void main(String str[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter Number of rows");
		int row=sobj.nextInt();
		
		System.out.println("Enter number of columns");
		int col=sobj.nextInt();
		
		dem dobj=new dem(row,col);
		 
		 array mobj=new array(row,col);
		 dobj.Accept();
		 dobj.Display();
		 int ret=dobj.maximum();
		 System.out.println("sum is:"+ret);
		 System.gc();
		
		
	}
}