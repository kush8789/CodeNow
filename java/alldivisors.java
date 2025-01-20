import java.util.Scanner;
public class alldivisors
{
    public static int[] finddivisors(int n,int[] size)
    {
        int[] divisors = new int[n];
        int count=0;

        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
            divisors[count++]=i;
            }
        }

        size[0]=count;
        return divisors;
    }
    public static void main(String[] args)
    {
        try (Scanner sc =new Scanner(System.in)){
        int n=sc.nextInt();
        
        int[] size= new int[1];
        int[] divisors= finddivisors(n,size);

        for(int i=0;i<size[0];i++)
        {
            System.out.print(divisors[i]+" ");
        }
    }
    }
}