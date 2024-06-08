import java.util.Scanner;

public class Armstrongnumber   
{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int k=String.valueOf(n).length();
        int sum=0;
        int temp=n;
        while(n>0)
        {
            int rem=n%10;
            sum+=Math.pow(rem,k);
            n=n/10;
        }
        if(sum==temp)
        {
            System.out.println("Armstrong number");
        }
        else
        {
            System.out.println("Not Armstrong number");
        }
    }
}