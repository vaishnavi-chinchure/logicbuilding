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
	public int frequency()
	{
		//int c=0;
		//int a=Arr[1][1];
		 int b=Arr[1][1];
		
		/*for(int i=0;i<Arr.length;i++)//rows
		{
			for(int j=0;j<Arr[i].length;j++)//columns
			{
				if(i==j)
				{
					if(Arr[i][j]>a)
					{
						a=Arr[i][j];
						
					}
				}
				
			}
			
		} 
		*/
		
		for(int k=Arr.length-1;k>0;k--)//rows
		{
			for(int j=Arr[k].length-1;j>0;j--)//columns
			{
				if(k==j)
				{
					if(Arr[j][k]>b)
					{
						b=Arr[j][k];
						
					}
				}
				
			}
			
		}
		return b;
		/*if(b>a)
		{ 
		return b;
			
		}
		else 
		{
			return a;
		}*/
		
	}
	/*public int bfrequency()
	{
		int c=0;
		//int a=Arr[1][1];
		 int b=Arr[1][1];
		
		
		for(int k=Arr.length-1;k>0;k--)//rows
		{
			for(int j=0;j<Arr[k].length;j++)//columns
			{
				if(k==j)
				{
					if(Arr[k][j]>b)
					{
						b=Arr[k][j];
						
					}
				}
				
			}
			
		}
		
		return b;
	}*/
}
class ass269
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
		int ret=mobj.frequency();
		 //int bret=mobj.bfrequency();
		System.out.println("frequency of nois:"+ret);
		//System.out.println("frequency of nois:"+bret);
		
	}
}