import java.util.Scanner;
public class GCD
{
    public static int findgcd(int n1, int n2)
    {
        int gcd=1;
        for(int i=1;i<=Math.min(n1,n2);i++)
        {
            if(n1%i==0 && n2%i==0)
            {
                gcd=i;
            }
        }
        return gcd;
    }
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        int n1 = scanner.nextInt();
        int n2 = scanner.nextInt();
        System.out.println(findgcd(n1,n2));

    }
}