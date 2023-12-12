import java.util.*;

class Numbers
{
	public int odd(int arr[])
	{
		int imult=1,i=0;

		for(i=arr.length-1;i>=0;i--)
		{
			if((arr[i]%2)!=0)
			{
				imult=imult*arr[i];
				
		    }
		}
		return imult;
	}
}


class ass246
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
		System.out.println("enter elements");
		for(int i=0;i<arr.length;i++)
		{
			arr[i]=sobj.nextInt();
		}
	
		
		Numbers nobj=new Numbers();
		
		
		ret=nobj.odd(arr);
		
		System.out.println("multiplication of odd elements is :"+ret);


	
	}

}