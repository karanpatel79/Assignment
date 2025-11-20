
class Vehicle {
    void run(){ System.out.println("Vehicle is running"); }
}
class Bike extends Vehicle {
    void run(){ System.out.println("Bike is running safely"); }
}

public class Lab16 {
    public static void main(String[] args) {
        Vehicle v = new Bike();
        v.run();
    }
}
