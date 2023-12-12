import java.util.*;

class Numbers
{
	public int lastoccurence(int arr[],int ino)
	{
		int isum=0,i=0;

		for(i=arr.length-1;i>=0;i--)
		{
			if(arr[i]==ino)
			{
				return i;
				
			}
			
		}
		return i;
	}
}


class ass244
{
	public static void main(String arg[])
	{
		Scanner sobj= new Scanner(System.in);
		int isize=0,ino=0;
		int ret=0;
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
		
		
		ret=nobj.lastoccurence(arr,ino);
		
		System.out.println("index is:"+ret);
	
	}

}