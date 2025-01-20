import java.util.*;

public class pascalTriangle {

    // public static int nCr(int n, int r) {
    //     int ans=1;
    //     for(int i=0;i<r;i++){
    //         ans=ans*(n-i);
    //         ans=ans/(i+1);
    //     }
    //     return ans;
    // }

    public static List<Integer> generateRow(int row){
        long prev=1;
        List<Integer> ans = new ArrayList<>();
        ans.add(1);
        for(int col=1;col<row;col++){
            prev=prev*(row-col);
            prev=prev/col;
            ans.add((int)prev);
        }
        return ans;
    }

    public static List<List<Integer>> pascal(int n) {
        // List<List<Integer>> ans = new ArrayList<>();
        // for(int row=1;row<=n;row++){
        //     List<Integer> temp = new ArrayList<>();
        //     for(int col=1;col<=row;col++){
        //         temp.add(nCr(row-1,col-1));
        //     }
        //     ans.add(temp);
        // }
        // return ans;

        List<List<Integer>>ans=new ArrayList<>();
        for(int row=1;row<=n;row++)
        {
            ans.add(generateRow(row));
        }
        return ans;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        List<List<Integer>> ans=pascal(n);
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans.get(i).size();j++){
                System.out.print(ans.get(i).get(j)+" ");
            }
            System.out.println();
        }
        sc.close();
    }
}
