class Overload {

    // Method for int
    void display(int a) {
        System.out.println("Integer value: " + a);
    }

    // Method for double
    void display(double a) {
        System.out.println("Double value: " + a);
    }

    // Method for String
    void display(String a) {
        System.out.println("String value: " + a);
    }

    public class Lab12 {    
    public static void main(String[] args) {
        Overload obj = new Overload();

        obj.display(10);          // calls int version
        obj.display(12.5);        // calls double version
        obj.display("Hello");     // calls String version
    }

}
}
