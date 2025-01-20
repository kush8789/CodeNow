import java.util.Scanner;

public class countfrequency
{
    static void countfre(int n,int[] a)
    {
        boolean visited[] = new boolean[n];
        for(int i=0;i<n;i++)
        {
            if(visited[i]==true)
            continue;

                int count=1;
                for(int j=i+1;j<n;j++)
                {
                    if(a[i]==a[j])
                    {
                        visited[j]=true;
                        count++;
                    }
                }
            System.out.println(a[i]+" "+count);
        }
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n;
        n=sc.nextInt();
        int[] a = new int[n];
        for(int i=0;i<n;i++)
        {
            a[i]=sc.nextInt();
        }
        countfre(n,a);
        sc.close();
    }
}


// static void countfre(int n,int[] a)
// {
//     Map<Integer, Integer> mp= new Hashmap<>();
//     for(int i=0;i<n;i++)
//     {
//         if(mp.containsKey(a[i]))
//         {
//             mp.put(a[i],mp.get(a[i])+1);
//         }
//         else
//         {
//             mp.put(a[i],1);
//         }
//     }
//     for(Map.Entry<Integer,Integer> entry : mp.entrySet())
//     {
//         System.out.println(entry.getKey()+" "+entry.getValue());
//     }
// }