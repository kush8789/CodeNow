package BS;
import java.util.*;
class BinarySearch
{
    public static int binarySearch(int[] arr,int n,int target)
    {
        int l=0;
        int r=n-1;
        while(l<=r)
        {
            int mid = (l+r)/2;
            if(arr[mid]==target)
            {
                return mid;
            }
            else if(arr[mid]<target)
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        return -1;
    }

    public static void main(String[] args)
    {
        try(Scanner sc = new Scanner(System.in)){
        int n=sc.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        }
        int target = sc.nextInt();
        int ans = binarySearch(arr,n,target);
        System.out.println(ans);
        sc.close();
    }
    }
}