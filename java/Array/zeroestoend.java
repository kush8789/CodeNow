import java.util.*;

class zeroestoend
{
    public static int[] movezeroes(int[] arr, int n)
    {
        // ArrayList<Integer> temp = new ArrayList<>();
        // for(int i=0;i<n;i++)
        // {
        //     if(arr[i]!=0)
        //         temp.add(arr[i]);
        // }
        // while(temp.size()<n)
        // {
        //     temp.add(0);
        // }
        // for(int i=0;i<n;i++)
        // {
        //     arr[i]=temp.get(i);
        // }
        // return arr;

        int j=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=0)
            {
                arr[j++]=arr[i];
            }
        }
        while(j<n)
        {
            arr[j++]=0;
        }
        return arr;
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        }
        int[] ans=movezeroes(arr,n);
        for(int i=0;i<n;i++)
        {
            System.out.print(ans[i]+" ");
        }
        System.out.println("");
        sc.close();
    }
}

// TC=O(2*n) SC=O(n)
// TC=O(n) SC=O(1)