
class Parent 
{
    void display()
    { 
        System.out.println("Parent Class"); 
    }
}
class Child extends Parent 
{
    void show()
    { 
        System.out.println("Child Class"); 
    }
}
public class Lab22 
{
    public static void main(String[] args)
    {
        Child c = new Child();
        c.display();
        c.show();
    }
}
