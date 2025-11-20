
class Student2 {
    String name;
    int age;
    Student2(String n, int a) {
        name = n; age = a;
    }
    void display() { System.out.println(name + " " + age); }
}
public class Lab17 {
    public static void main(String[] args) {
        Student2 s = new Student2("Rushi", 22);
        s.display();
    }
}
