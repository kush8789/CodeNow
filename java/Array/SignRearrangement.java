import java.util.ArrayList;
import java.util.Scanner;
public class SignRearrangement {

    public static ArrayList<Integer> isRearrange(ArrayList<Integer> arr,int n){
        // ArrayList<Integer>pos=new ArrayList<>();
        // ArrayList<Integer>neg=new ArrayList<>();

        // for(int i=0;i<n;i++)
        // {
        //     if(arr.get(i)>0) pos.add(arr.get(i));
        //     else neg.add(arr.get(i));
        // }

        // for(int i=0;i<n/2;i++)
        // {
        //     arr.set(i*2,pos.get(i));
        //     arr.set(i*2+1,neg.get(i));
        // }
        // return arr;

        ArrayList<Integer>ans=new ArrayList<Integer>(n);
        
        int pos=0,neg=1;
        for(int i=0;i<n;i++)
        {
            if(arr.get(i)<0)
            {
                ans.set(neg,arr.get(i));
                neg+=2;
        }
        else{
            ans.set(pos,arr.get(i));
                pos+=2;
            }
        }
        return ans;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        ArrayList<Integer> arr=new ArrayList<>();
        for(int i=0;i<n;i++){
            arr.add(sc.nextInt());
        }
        System.out.println(isRearrange(arr,n));
        sc.close();
    }   
}
