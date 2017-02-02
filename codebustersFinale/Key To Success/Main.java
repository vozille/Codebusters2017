import java.io.*;
import java.util.Scanner;
public class Main{

    public static long GCD(long a, long b) {
        if(b < 1){
            return a;
        }
        else{
            return GCD(b, a%b);
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int tc = sc.nextInt();
        while(tc-- > 0)
        {
            long a = sc.nextLong();
            long b = sc.nextLong();
            System.out.println((a*b)/GCD(a, b));
        }
    }
}