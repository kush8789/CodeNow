
import java.util.Scanner;
class secondlargestelement
{
static private int secondLargest(int[] arr, int n)
{
	if(n<2)
	return -1;

	    int large = Integer.MIN_VALUE;
	    int second_large = Integer.MIN_VALUE;
	    int i;
        for (i = 0; i < n; i++)
        {
            if (arr[i] > large)
            {
                second_large = large;
                large = arr[i];
            }

            else if (arr[i] > second_large && arr[i] != large)
            {
                second_large = arr[i];
            }
        }
	return second_large;
}

public static void main(String[] args)
{
	Scanner sc = new Scanner(System.in);
    int n= sc.nextInt();
    int[] arr = new int[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=sc.nextInt();
    }
		int sL = secondLargest(arr, n);
	System.out.println("Second largest is "+sL);
    sc.close();
}

}


