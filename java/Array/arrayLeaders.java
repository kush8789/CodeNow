import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;
public class arrayLeaders {

    public static ArrayList<Integer> leaders(ArrayList<Integer> arr,int n){

    ArrayList<Integer> ans=new ArrayList<>();
    // for(int i=0;i<n;i++){
    //     Boolean leader=true;
    //     for(int j=i+1;j<n;j++)
    //     {
    //         if(arr.get(i)<arr.get(j)){
    //             leader=false;
    //             break;
    //         }
    //     }
    //         if(leader==true){
    //             ans.add(arr.get(i));
    //         }
    // }
    // System.out.println(ans);
    // return ans;

    int max=arr.get(n-1);
    ans.add(max);
    for(int i=n-2;i>=0;i--){
        if(arr.get(i)>max)
        {
            max=arr.get(i);
            ans.add(arr.get(i));
        }
    }
    Collections.reverse(ans);
    return ans;
}

    public static void main(String[] args) {
        try(Scanner sc=new Scanner(System.in)){
        int n=sc.nextInt();
        ArrayList<Integer> arr=new ArrayList<>();
        for(int i=0;i<n;i++){
            arr.add(sc.nextInt());
        }
        leaders(arr,n);
        sc.close();
    }
    }   
}