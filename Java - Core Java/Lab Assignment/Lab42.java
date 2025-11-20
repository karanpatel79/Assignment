
import java.io.*;

class Student implements Serializable {
    int id;
    String name;

    Student(int id, String name) {
        this.id = id;
        this.name = name;
    }
}

public class Lab42 {
    public static void main(String[] args) {
        try {
            // Serialization
            Student s1 = new Student(101, "Rushi");
            ObjectOutputStream oos = new ObjectOutputStream(new FileOutputStream("student.ser"));
            oos.writeObject(s1);
            oos.close();
            System.out.println("Object serialized successfully.");

            // Deserialization
            ObjectInputStream ois = new ObjectInputStream(new FileInputStream("student.ser"));
            Student s2 = (Student) ois.readObject();
            ois.close();

            System.out.println("Deserialized Student Details:");
            System.out.println("ID: " + s2.id + ", Name: " + s2.name);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
