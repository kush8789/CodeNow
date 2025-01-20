import java.util.*;
public class union
{
    public static ArrayList<Integer> FindUnion(int[] arr1, int[] arr2, int n, int m)
    {
        HashMap<Integer, Integer> mp=new HashMap<>();
        ArrayList<Integer> union = new ArrayList<>();

        for(int i = 0; i < n; i++)
        {
            mp.put(arr1[i], mp.getOrDefault(arr1[i], 0) + 1);
        }

        for(int i = 0; i < m; i++)
        {
            mp.put(arr2[i], mp.getOrDefault(arr2[i], 0) + 1);
        }
        
        for(int it : mp.keySet())
        {
            union.add(it);
        }
        return union;
        // HashSet <Integer> s=new HashSet<>();
        // ArrayList < Integer > Union=new ArrayList<>();
        // for (int i = 0; i < n; i++)
        //     s.add(arr1[i]);
        // for (int i = 0; i < m; i++)
        //     s.add(arr2[i]);
        // for (int it: s)
        //     Union.add(it);
        // return Union;

    }
    // int i=0,j=0;
    // ArrayList<Integer> Union = new ArrayList<>();
    // while(i<n && j<m)
    // {
    //     if(a[i]<b[j])
    //         Union.add(a[i++]);
    //     else if(a[i]>b[j])
    //         Union.add(b[j++]);
    //     else
    //     {
    //         Union.a(a[i++]);
    //         j++;
    //     }
    // }
    // while(i<n)
    //     Union.add(a[i++]);
    // while(j<m)
    //     Union.add(b[j++]);
    // return Union;
    // }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int[] arr1 = new int[n];
        int[] arr2 = new int[m];
        for(int i = 0; i < n; i++)
        {
            arr1[i] = sc.nextInt();
        }
        for(int i = 0; i < m; i++)
        {
            arr2[i] = sc.nextInt();
        }
        ArrayList<Integer> Union = FindUnion(arr1, arr2, n, m);
        for (int val: Union)
            System.out.print(val+" ");

        sc.close();
    }
}

// TC=(n+m)log(n+m) SC=O(n+m)
// TC=O(n+m) SC=O(m+n)