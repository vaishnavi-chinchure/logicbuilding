import java.util.*;

class Numbers
{
	public void range(int arr[],int ino1,int ino2)
	{
		int isum=0,i=0;

		for(i=arr.length-1;i>=0;i--)
		{
			if((arr[i]>=ino1)&&(arr[i]<=ino2))
			{
				System.out.println(+arr[i]);
				
		    }
		}
	}
}


class ass245
{
	public static void main(String arg[])
	{
		Scanner sobj= new Scanner(System.in);
		int isize=0,ino1=0,ino2=0;
		int ret=0;
		System.out.println("enter number of elements");
		isize=sobj.nextInt();
		
		int arr[]=new int[isize];
		System.out.println("capacity of the array is :"+arr.length);
		System.out.println("enter elements");
		for(int i=0;i<arr.length;i++)
		{
			arr[i]=sobj.nextInt();
		}
	
		System.out.println("enter the first value");
		ino1=sobj.nextInt();
		
		System.out.println("enter the second value");
		ino2=sobj.nextInt();
		
		Numbers nobj=new Numbers();
		
		
		nobj.range(arr,ino1,ino2);
		

	
	}

}