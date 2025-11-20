
import java.util.Scanner;

public class Lab3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter two numbers: ");
        int a = sc.nextInt();
        int b = sc.nextInt();

        System.out.println("Addition: " + (a + b));
        System.out.println("Subtraction: " + (a - b));
        System.out.println("Multiplication: " + (a * b));
        System.out.println("Division: " + ((float)a / b));

        System.out.println("a > b: " + (a > b));
        System.out.println("a == b: " + (a == b));
        sc.close();
    }
}

