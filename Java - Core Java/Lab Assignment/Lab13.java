
class Counter {
    static int count = 0;
    Counter() { count++; }
    static void display() {
        System.out.println("Objects created: " + count);
    }
}

public class Lab13 {
    public static void main(String[] args) {
        new Counter();
        new Counter();
        Counter.display();
    }
}
