
import java.util.Scanner;

public class Lab20 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String s = sc.nextLine();
        String rev = new StringBuilder(s).reverse().toString();
        if(s.equalsIgnoreCase(rev))
            System.out.println("Palindrome");
        else
            System.out.println("Not Palindrome");
        sc.close();
    }
}
