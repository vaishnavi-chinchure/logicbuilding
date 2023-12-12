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
	public void ddisplay()
	{
		int m[][]=new int[Arr.length][Arr.length];
		System.out.println("elements of the matrix are:");
		for(int i=0;i<Arr.length;i++)//rows
		{
			for(int j=0;j<Arr[i].length;j++)//columns
			{
				System.out.print(Arr[j][i]+"\t");
			}
			System.out.println();
		}
	}
	
}
class ass271
{
	public static void main(String str[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter Number of rows");
		int row=sobj.nextInt();
		
		System.out.println("Enter number of columns");
		int col=sobj.nextInt();
		
	
		 
		 Matrix mobj=new Matrix(row,col);
		 mobj.accept();
		 mobj.display();
		 mobj.ddisplay();
		 
		
		
	}
}