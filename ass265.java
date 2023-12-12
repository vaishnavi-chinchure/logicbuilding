//write a java program which accept number of rows and columns from user and display below pattern
//input: irow=4 icol=4
//output:4 4 4 4
//       3 3 3 3 
//       2 2 2 2
//       1 1 1 1


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
		int a=Arr.length;
		for(int i=Arr.length-1;i>=0;i--)
		{
			for(int j=1;j<=Arr[i].length;j++)
			{
				System.out.print(a+"\t");
			}
			System.out.println();
			a--;
		}
	}
	
}
class ass265
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




