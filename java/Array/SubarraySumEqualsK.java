import java.util.*;

public class SubarraySumEqualsK {

    public static ArrayList<Integer> subarraySum(ArrayList<Integer> nums,int n, int k) {
        ArrayList<Integer> ans=new ArrayList<>();
        // int count=0;
        // for(int i=0;i<n;i++)
        //     {
        //         for(int j=i;j<n;j++)
        //         {
        //             int sum=0;
        //             for(int l=i;l<=j;l++)
        //             {
        //                 sum+=nums.get(l);
        //             }
        //             if(sum==k)
        //             {
        //                 count++;
        //             }
        //         }
        //     }
        //     ans.add(count);
        //     return ans;

        HashMap<Integer,Integer>mp=new HashMap<>();
        int sum=0;
        int count=0;
        mp.put(0,1);
        for(int i=0;i<n;i++)
        {
            sum+=nums.get(i);
            if(mp.containsKey(sum-k))
            {
                count+=mp.get(sum-k);
            }
            mp.put(sum,mp.getOrDefault(sum,0)+1);
        }
        ans.add(count);
        return ans;
    }
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int k=sc.nextInt();
        ArrayList<Integer> arr=new ArrayList<>();
        for(int i=0;i<n;i++){
            arr.add(sc.nextInt());
        }
        ArrayList<Integer> ans=subarraySum(arr,n,k);
        System.out.println(ans);
        sc.close();
    }
}
