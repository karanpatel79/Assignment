import java.util.Scanner;

class Lab21 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter first string: ");
        String s1 = sc.nextLine();

        System.out.print("Enter second string: ");
        String s2 = sc.nextLine();

        // Using equals()
        if (s1.equals(s2)) {
            System.out.println("Using equals(): Strings are EQUAL");
        } else {
            System.out.println("Using equals(): Strings are NOT equal");
        }

        // Using compareTo()
        int result = s1.compareTo(s2);

        if (result == 0) {
            System.out.println("Using compareTo(): Strings are EQUAL");
        } else if (result > 0) {
            System.out.println("Using compareTo(): First string is GREATER");
        } else {
            System.out.println("Using compareTo(): First string is SMALLER");
        }

        sc.close();
    }
}
