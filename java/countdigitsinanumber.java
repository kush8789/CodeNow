
import java.util.Scanner;

                                

public class countdigitsinanumber {
    
    public static int countDigits(int n) { 
        int cnt = 0;
        while (n > 0) {
            cnt++;
            n = n / 10;
        }
        return cnt;
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n=scanner.nextInt();
        System.out.println(n);
        int digits = countDigits(n);
        System.out.println(digits);
    }
}

                                
                            