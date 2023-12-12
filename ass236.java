/* write a java program which accept n numbers from user and display all such elements which are multiples of 11
input:6
elements:85 66 3 80 93 88
output:88 66
*/
import java.util.*;
class array
{
	public void display(int arr[])
	{
		
		for(int i=0;i<arr.length;i++)
		{
			if((arr[i]%11)==0)
			{
				System.out.println(+arr[i]);
			}
		}
	}
}
class ass236
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
		nobj.display(arr);
		
	
	}
}