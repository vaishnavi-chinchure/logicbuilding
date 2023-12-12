/* write a java program which accept n numbers from user and display all such elements which are 3 and divisible by 5
input:6
elements:85 66 3 80 93 88
output:80
*/
import java.util.*;
class array
{
	public void display(int arr[])
	{
		
		for(int i=0;i<arr.length;i++)
		{
			if(((arr[i]%3)==0)&&((arr[i]%5)==0))
			{
				System.out.println(+arr[i]);
			}
		}
	}
}
class ass235
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