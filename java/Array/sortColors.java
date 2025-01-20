import java.util.*;

public class sortColors {

    public static ArrayList<Integer> SC(ArrayList<Integer> a,int n)
    {
        // Collections.sort(a);
        // return a;

        // int cnt0=0,cnt1=1,cnt2=2;
        // for(int i=0;i<n;i++)
        // {
        //     if(a.get(i)==0)
        //     {
        //         cnt0++;
        //     }
        //     else if(a.get(i)==1)
        //     {
        //         cnt1++;
        //     }
        //     else
        //     {
        //         cnt2++;
        //     }
        // }

        // for(int i=0;i<n;i++)
        // {
        //     if(i<cnt0)
        //     {
        //         a.set(i,0);
        //     }
        //     else if(i<cnt0+cnt1)
        //     {
        //         a.set(i,1);
        //     }
        //     else
        //     {
        //         a.set(i,2);
        //     }
        // }
        // return a;

        int low=0,mid=0,high=n-1;
        while(mid<=high)
        {
            if(a.get(mid)==0)
            {
                int temp=a.get(low);
                a.set(low,a.get(mid));
                a.set(mid,temp);
                low++;
                mid++;
            }
            else if(a.get(mid)==1)
            {
                mid++;
            }
            else
            {
                int temp=a.get(mid);
                a.set(mid,a.get(high));
                a.set(high,temp);
                high--;
            }
        }
        return a;
    }
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int n= sc.nextInt();
        ArrayList<Integer>a= new ArrayList<>();
        for(int i=0;i<n;i++)
        {
            a.add(sc.nextInt());
        }
        ArrayList<Integer> sortedList = SC(a,n);  // Call the SC method to sort the list
        System.out.println(sortedList);
        sc.close();
    }
}
