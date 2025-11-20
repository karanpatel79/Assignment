
import java.util.Scanner;

public class Lab11 {
    static int max(int a, int b, int c) {
        return (a > b && a > c) ? a : (b > c ? b : c);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter 3 numbers: ");
        int a = sc.nextInt(), b = sc.nextInt(), c = sc.nextInt();
        System.out.println("Max: " + max(a,b,c));
        sc.close();
    }
}
