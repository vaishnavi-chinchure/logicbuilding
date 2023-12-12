import java.util.*;

class Numbers
{
	public boolean sum(int arr[],int ino)
	{
		int isum=0;
		System.out.println("capacity of the array is :"+ino);
		for(int i=0;i<arr.length;i++)
		{
			if(arr[i]==ino)
			{
				return true;
			}
			
		}
		return true;
	}
}



class ass242
{
	public static void main(String arg[])
	{
	
	
		Scanner sobj= new Scanner(System.in);
		int isize=0,ino=0;
		boolean bret=false;
		System.out.println("enter number of elements");
		isize=sobj.nextInt();
		
		int arr[]=new int[isize];
		System.out.println("capacity of the array is :"+arr.length);
		for(int i=0;i<arr.length;i++)
		{
			arr[i]=sobj.nextInt();
		}
	
		System.out.println("enter the value");
		ino=sobj.nextInt();
		Numbers nobj=new Numbers();
		/*System.out.println("enter the value");
		ino=sobj.nextInt(ino);*/
		
		//Numbers obj=new Numbers();
		
		bret=nobj.sum(arr,ino);
		if(bret==true)
		{
			System.out.println("given number is present");
		}
		else
		{
			System.out.println("given number is not present");

		}
		
	
	}

}