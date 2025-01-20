import java.util.Scanner;
public class checkforprime
{
    public static boolean isPrime(int n)
    {
            int count=0;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                count++;
            }
        }
        return count==2;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n= sc.nextInt();
        boolean prime=isPrime(n);
        if(prime){
            System.out.println("Prime");
        }
        else{
            System.out.println("Not Prime");
        }
        sc.close();
    }
}