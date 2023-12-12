//write a program which accept matrix from user and return the frequency of no
/*input:3 2 5 9
        4 3 2 2 
	    8 4 1 5 
	    3 9 7 5*/

import java.util.*;
class Matrix
{
	public int Arr[][];//reference
	public Matrix(int irow,int icol)
	{
		Arr=new int[irow][icol];
	}
	/*protected void finalize()
	{
		Arr=null;
	}*/
	public void accept()
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("enter the elements");
		for(int i=0;i<Arr.length;i++)//rows
		{
			for(int j=0;j<Arr[i].length;j++)//columns
			{
				Arr[i][j]=sobj.nextInt();
			}
		}
	}
	public void display()
	{
		System.out.println("elements of the matrix are:");
		for(int i=0;i<Arr.length;i++)//rows
		{
			for(int j=0;j<Arr[i].length;j++)//columns
			{
				System.out.print(Arr[i][j]+"\t");
			}
			System.out.println();
		}
	}
	public int frequency(int no)
	{
		int c=0;
		for(int i=0;i<Arr.length;i++)//rows
		{
			for(int j=0;j<Arr[i].length;j++)//columns
			{
				if(Arr[i][j]==no)
				{
					c++;
				}
			}
			
		}
		return c;
	}
}
class ass268
{
	public static void main(String str[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter Number of rows");
		int row=sobj.nextInt();
		
		System.out.println("Enter number of columns");
		int col=sobj.nextInt();
		
	    System.out.println("Enter number no");
		int no=sobj.nextInt();
		
		 
		 Matrix mobj=new Matrix(row,col);
		 mobj.accept();
		 mobj.display();
		 int ret=mobj.frequency(no);
		 System.out.println("frequency of no
		 is:"+ret);
		
		
	}
}