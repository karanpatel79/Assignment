
class Animal 
{
    void sound()
    { 
        System.out.println("Animal sound"); 
    }
}
class Dog extends Animal
 {
    void sound()
    { 
        System.out.println("Bark"); 
    }
}
public class Lab23 
{
    public static void main(String[] args)
    {
        Animal a = new Dog();
        a.sound();
    }
}
