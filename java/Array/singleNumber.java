import java.util.*;

public class singleNumber {

    public static int Number(ArrayList<Integer> arr, int n)
    {
        // for(int i=0;i<n;i++)
        // {
        //     int num=arr.get(i);
        //     int cnt=0;
        //     for(int j=0;j<n;j++)
        //     {
        //         if(arr.get(j)==num)
        //             cnt++;
        //         }
        //     if(cnt==1)
        //         return num;
        // }
        // return -1;

        HashMap<Integer,Integer>mp=new HashMap<>();
        for(int i=0;i<n;i++)
        {
            mp.put(arr.get(i),mp.getOrDefault(arr.get(i),0)+1);
        }
        for(int it: mp.keySet())
        {
            if(mp.get(it)==1)
                return it;
        }
        return -1;

        // int ans = 0;
        // for(int i=0;i<n;i++){
        //     ans = ans^arr.get(i);
        // }
        // return ans;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<Integer> arr= new ArrayList<>();
        for(int i=0;i<n;i++){
            arr.add(sc.nextInt());
        }
        System.out.println(Number(arr,n));
        sc.close();
    }

}
