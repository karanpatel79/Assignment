
public class Lab4 {
    public static void main(String[] args) {
        int a = 10;
        double b = a;  // implicit casting (int → double)
        System.out.println("Implicit Casting (int to double): " + b);

        double x = 9.78;
        int y = (int) x;  // explicit casting (double → int)
        System.out.println("Explicit Casting (double to int): " + y);
    }
}
