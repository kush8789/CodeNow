import java.util.Scanner;
// import java.util.Arrays;
import java.util.HashSet;

class LongestConsecutiveSequence {

    public int longestConsecutive(int[] arr) {
        // int n= arr.length;
        // int max_count=0;
        // for(int i=0;i<n;i++){
        //     int x=arr[i];
        //     int count=1;
        //     for(int j=i+1;j<n;j++){
        //         if(x+1==arr[j]){
        //             x+=1;
        //             count++;
        //             j=-1;
        //         }
        //     }
        //     max_count=Math.max(max_count,count);
        // }
        // return max_count;

        // int n= arr.length;
        // if(n==0){
        //     return 0;
        // }
        // Arrays.sort(arr);
        // int max_count=1;
        // int count=1;
        // int prev_smaller=arr[0];
        // for(int i=1;i<n;i++){
        //     if(arr[i]==prev_smaller+1){
        //         count++;
        //     }
        //     else if(arr[i]!=prev_smaller){
        //         count=1;
        //     }
        //     prev_smaller=arr[i];
        //     max_count=Math.max(max_count,count);
        // }
        // return max_count;

        int n= arr.length;
        if(n==0){
            return 0;
        }
        int max_count=1;
        HashSet<Integer> set= new HashSet<Integer>();
        for(int i=0;i<n;i++){
            set.add(arr[i]);
        }
        for(int it : set)
        {
            if(!set.contains(it-1))
            {
                int count=1;
                while(set.contains(it+1))
                {
                    it++;
                    count++;
                }
                max_count=Math.max(max_count,count);
            }
        }
        return max_count;
        }
}
class Main {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int n= sc.nextInt();
        int[] arr= new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        LongestConsecutiveSequence obj = new LongestConsecutiveSequence();
        System.out.println(obj.longestConsecutive(arr));
        sc.close();
    }    
}
