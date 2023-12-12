/* write a java program which accept n numbers from user and return the difference between summation of even elements and summation 
of add elements
input:6
elements:85 66 3 80 93 88
output:53(234-181)
*/
import java.util.*;
class array
{
	public int difference(int arr[])

	{
		int diff=0,even=0,odd=0;
		for(int i=0;i<arr.length;i++)
		{
			if((arr[i]%2)==0)
			{
				even=even+arr[i];
			}
			else
			{
				odd=odd+arr[i];
			}
			diff=even-odd;
		}
		return diff;
	}
}
class ass232
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		int isize=0;
		System.out.println("enter the number of elements");
		isize=sobj.nextInt();
		int arr[]=new int[isize];
		System.out.println("please enter the values");
		for(int i=0;i<arr.length;i++)
		{
			arr[i]=sobj.nextInt();
		}
		array nobj=new array();
		int iret=nobj.difference(arr);
		System.out.println("difference between summationof even numbers and odd numbers is:"+iret);
	
	}
}