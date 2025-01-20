import java.util.*;
public class longestSubarrayWithK{

    public static int LSK(int[] a,int n, int K){
        // int len=0;
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=i;j<n;j++)
        //     {
        //         int sum=0;
        //         for(int k=i;k<=j;k++)
        //         {
        //             sum+=a[k];
        //         }
        //         if(sum==K)
        //         {
        //             len=Math.max(len,j-i+1); 
        //         }
        //     }
        // }
        // return len;

        // HashMap<Integer,Integer>mp=new HashMap<>();
        // int sum=0;
        // int len=0;
        // for(int i=0;i<n;i++)
        // {
        //     sum+=a[i];
        //     if(sum==K)
        //     {
        //         len=i+1;
        //     }
        //     if(mp.containsKey(sum-K))
        //     {
        //         len=Math.max(len,i-mp.get(sum-K));
        //     }
        //     if(!mp.containsKey(sum))
        //     {
        //         mp.put(sum,i);
        //     }
        // }
        // return len;

        int left=0,right=0;
        int sum=a[0];
        int len=0;
        while(right<n)
        {
            if(sum==K)
            {
                len=Math.max(len,right-left+1);
            }
            if(sum<K)
            {
                right++;
                if(right<n)
                {
                    sum+=a[right];
                }
            }
            else
            {
                sum-=a[left];
                left++;
            }
        }
        return len;
    }
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int n= sc.nextInt();
        int K= sc.nextInt();
        int[] a= new int[n];
        for(int i=0;i<n;i++){
            a[i]=sc.nextInt();
        }
        System.out.println(LSK(a,n,K));
        sc.close();
    }
}