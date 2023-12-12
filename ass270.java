import java.util.*;
import logic.array;

class demo extends array
{
	public demo(int irow,int icol)
	{
		super(irow,icol);
	}
	void sumcol()
	{
		int isum=0;
		for(int i=0;i<Arr.length;i++)
		{
			isum=0;
			for(int j=0;j<Arr[i].length;j++)
			{
				
					isum=isum+Arr[j][i];
				
			}
			System.out.println("maximum element of col no"+(i+1)+"is :"+isum);
		}
		
	}
	
}
class ass270
{
	public static void main(String str[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter Number of rows");
		int row=sobj.nextInt();
		
		System.out.println("Enter number of columns");
		int col=sobj.nextInt();
		
		demo dobj=new demo(row,col);
		 
		 array mobj=new array(row,col);
		 dobj.Accept();
		 dobj.Display();
		 dobj.sumcol();
		
		 
		 System.gc();
		
		
	}
}