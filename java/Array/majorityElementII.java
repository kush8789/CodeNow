import java.util.*;

public class majorityElementII {
    public static List<Integer> majorityElement(List<Integer>nums) {
        // int n = nums.size(); //size of the array
        // List<Integer> ls = new ArrayList<>(); // list of answers
        // for (int i = 0; i < n; i++) {
        //     if (ls.size() == 0 || ls.get(0) != nums.get(i)) {
        //         int cnt = 0;
        //         for (int j = 0; j < n; j++) {
        //             if (nums.get(j) == nums.get(i)) {
        //                 cnt++;
        //             }
        //         }

        //         // check if frquency is greater than n/3:
        //         if (cnt > (n / 3))
        //             ls.add(nums.get(i));
        //     }

        //     if (ls.size() == 2) break;
        // }

        // return ls;

        int n = nums.size(); //size of the array
        List<Integer> ls = new ArrayList<>(); // list of answers

        //declaring a map:
        Map<Integer,Integer> mpp = new HashMap<>();

        // least occurrence of the majority element:
        int mini = (int)(n / 3) + 1;

        //storing the elements with its occurnce:
        for (int i = 0; i < n; i++) {
            int value = mpp.getOrDefault(nums.get(i), 0);
            mpp.put(nums.get(i), value + 1);

            //checking if v[i] is
            // the majority element:
            if (mpp.get(nums.get(i)) == mini) {
                ls.add(nums.get(i));
            }
            if (ls.size() == 2) break;
        }

        return ls;
    }

    public static void main(String args[]) {
        Scanner sc= new Scanner(System.in);
        int n= sc.nextInt();
        List<Integer> arr = new ArrayList<>();
        for(int i=0;i<n;i++){
            arr.add(sc.nextInt());
        }
        List<Integer> ans = majorityElement(arr);
        System.out.print("The majority elements are: ");
        for (int i = 0; i < ans.size(); i++) {
            System.out.print(ans.get(i) + " ");
        }
        System.out.println();
        sc.close();
    }
}
