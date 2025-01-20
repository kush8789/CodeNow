import java.util.*;
import java.util.Scanner;
public class twosum {

    public static int[] twoSum(ArrayList<Integer> a, int target) {
        // int[] ans=new int[2];
        // ans[0] = ans[1] = -1;
        // for(int i=0;i<a.size();i++){
        //     for(int j=i+1;j<a.size();j++){
        //         if(a.get(i)+a.get(j)==target){
        //             ans[0]=i;
        //             ans[1]=j;
        //         }
        //     }
        // }
        // return ans;

        // HashMap<Integer,Integer>mp=new HashMap<>();
        // for(int i=0;i<a.size();i++){
        //     if(mp.containsKey(target-a.get(i)))
        //         return new int[]{mp.get(target-a.get(i)),i};
        //     mp.put(a.get(i),i);
        // }
        // return new int[]{-1,-1};

        int n=a.size();
        int l=0,r=n-1;
        while(l<r){
            if(a.get(l)+a.get(r)==target)
                return new int[]{l,r};
            else if(a.get(l)+a.get(r)<target)
                l++;
            else
                r--;
        }
        return new int[]{-1,-1};
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        ArrayList<Integer>a=new ArrayList<>();
        for(int i=0;i<n;i++){
            a.add(sc.nextInt());
        }
        int target=sc.nextInt();
        int[] ans=twoSum(a,target);
        System.out.println(ans[0]+" "+ans[1]);
        sc.close();
    }
}
