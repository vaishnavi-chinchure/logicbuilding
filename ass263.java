//write a java program which accept number of rows and columns from user and display below pattern
//input: irow=4 icol=4
//output:A B C D
//       a b c d
//		 A B C D
//       a b c d


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
		char a='A';
		char b='a';
		System.out.println("elements of the matrix are:");
		for(int i=0;i<Arr.length;i++)
		{
			for(int j=0;j<Arr[i].length;j++)
			{
				if(i%2==0)
				{
					System.out.print(a+"\t");
					a++;
				}
				else
				{
					System.out.print(b+"\t");
					b++;
				}
			}
			System.out.println();
			a='A';
			b='a';
		}
	}
	
}
class ass263
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




