//write a java program which accept number of rows and columns from user and display below pattern
//input: irow=4 icol=4
//output: 1  2  3  4
//        5  6  7  8
//  	  9  10 11 12
//		  13 14 15 16


import java.util.*;
class Matrix
{
	public int Arr[][];//reference
	public Matrix(int irow,int icol)
	{
		Arr=new int[irow][icol];
	}
	
	public void display()
	{
		
		System.out.println("elements of the matrix are:");
		int a=1;
		for(int i=Arr.length-1;i>=0;i--)
		{
			for(int j=1;j<=Arr[i].length;j++)
			{
				System.out.print(a+"\t");
				a++;
			}
			System.out.println();
			
		}
	}
	
}
class ass266
{
	public static void main(String str[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter Number of rows");
		int row=sobj.nextInt();
		
		System.out.println("Enter number of columns");
		int col=sobj.nextInt();
		
	
		 
		 Matrix mobj=new Matrix(row,col);
		
		 mobj.display();
		 
		
		
	}
}




