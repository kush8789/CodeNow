import java.util.ArrayList;
import java.util.Scanner;
public class nextPermutation {

    private static void reverse(ArrayList<Integer> arr, int start)
    {
        int end = arr.size() - 1;
        while (start < end) {
            int temp = arr.get(start);
            arr.set(start, arr.get(end));
            arr.set(end, temp);
            start++;
            end--;
        }
    }

    private static void swap(ArrayList<Integer> arr, int i, int j)
    {
        int temp = arr.get(i);
        arr.set(i, arr.get(j));
        arr.set(j, temp);
    }

    public static ArrayList<Integer> Permutation(ArrayList<Integer> arr, int n) {
        int i = n - 2;
        while (i >= 0 && arr.get(i) >= arr.get(i + 1)) {
            i--;
        }
        if (i >= 0) {
            int j = n - 1;
            while (arr.get(j) <= arr.get(i)) {
                j--;
            }
            swap(arr, i, j);
        }
        reverse(arr, i + 1);
        return arr;
    }


    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        ArrayList<Integer> arr=new ArrayList<Integer>(n);
        for(int i=0;i<n;i++){
            arr.add(s.nextInt());
        }
        arr=Permutation(arr,n);
        for(int i=0;i<n;i++){
            System.out.print(arr.get(i)+" ");
        }
        s.close();
    }    
}
