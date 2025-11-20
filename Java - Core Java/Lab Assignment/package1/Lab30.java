package package1;

public class Lab30 {
    private int privateVar = 10;
    int defaultVar = 20;          // default access
    protected int protectedVar = 30;
    public int publicVar = 40;

    public void display() {
        System.out.println("Private Var: " + privateVar);
        System.out.println("Default Var: " + defaultVar);
        System.out.println("Protected Var: " + protectedVar);
        System.out.println("Public Var: " + publicVar);
    }
}