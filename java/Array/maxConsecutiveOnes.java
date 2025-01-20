import java.util.ArrayList;
import java.util.Scanner;

public class maxConsecutiveOnes {

    public static int maxOnes(ArrayList<Integer> arr, int n) {
        int count=0;
        int max_count=0;
        for(int i=0;i<n;i++){
            if(arr.get(i)==1){
                count++;
            }
            else{
                count=0;
            }
            max_count=Math.max(count,max_count);
        }
        return max_count;
    }
    public static void main(String[] args) {
        Scanner s= new Scanner(System.in);
        int n= s.nextInt();
        ArrayList<Integer> arr= new ArrayList<>();
        for(int i=0;i<n;i++){
            arr.add(s.nextInt());
        }
        System.out.println(maxOnes(arr,n));
        s.close();
    }
}