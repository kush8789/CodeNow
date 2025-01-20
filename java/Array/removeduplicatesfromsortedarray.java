import java.util.*;
public class removeduplicatesfromsortedarray
{
    static private int removeDuplicates(int[] nums, int n)
    {
        if(n==0)
        {
            return 0;
        }
        // HashSet<Integer>s = new HashSet<>();
        // for(int i=0;i<n;i++)
        // {
        //     s.add(nums[i]);
        // }
        // int i=0;
        // for(int x:s)
        // {
        //     nums[i++]=x;
        // }
        // return s.size();
        int j=0;
        for(int i=1;i<n;i++)
        {
            if(nums[i]!=nums[j])
            {
                j++;
                nums[j]=nums[i];
            }
        }
        return j+1;
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int []arr = new int[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        }
        int ans = removeDuplicates(arr,n);
        System.out.println(ans);
        for (int i = 0; i < ans; i++) {
            System.out.print(arr[i] + " ");
        }
        sc.close();
    }
}

// TC=O(n*log(n))+O(n) SC=O(n)
// TC=O(n) SC=O(1)