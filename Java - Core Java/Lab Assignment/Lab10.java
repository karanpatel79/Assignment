
class Person {
    private String name;
    private int age;

    // Setter for name
    public void setName(String name) {
        this.name = name;
    }

    // Getter for name
    public String getName() {
        return name;
    }

    // Setter for age
    public void setAge(int age) {
        if (age >= 0) {          // simple validation
            this.age = age;
        } else {
            System.out.println("Age cannot be negative!");
        }
    }

    // Getter for age
    public int getAge() {
        return age;
    }
}

public class Lab10 {
    public static void main(String[] args) {
        Person p = new Person();

        p.setName("Rushi");
        p.setAge(21);

        System.out.println("Name: " + p.getName());
        System.out.println("Age: " + p.getAge());
    }
}
