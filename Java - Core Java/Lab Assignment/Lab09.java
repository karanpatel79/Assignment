

class Student {
    String name;
    int age;

    // Default constructor
    Student() {
        name = "Unknown";
        age = 0;
    }

    // Constructor with one parameter
    Student(String n) {
        name = n;
        age = 18; // default age
    }

    // Constructor with two parameters
    Student(String n, int a) {
        name = n;
        age = a;
    }

    void display() {
        System.out.println("Name: " + name + ", Age: " + age);
    }
}

public class Lab09 {
    public static void main(String[] args) {
        // Creating objects using different constructors
        Student s1 = new Student();             // Calls default constructor
        Student s2 = new Student("Rushi");      // Calls constructor with one argument
        Student s3 = new Student("Alex", 21);   // Calls constructor with two arguments

        // Display details
        s1.display();
        s2.display();
        s3.display();
    }
}
