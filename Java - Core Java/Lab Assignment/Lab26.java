
interface A 
{ 
    void show(); 
}
interface B 
{ 
    void display(); 
}

class C implements A, B 
{
    public void show()
    { 
        System.out.println("Show from A"); 
    }
    public void display()
    { 
        System.out.println("Display from B");
    }
}

public class Lab26 {
    public static void main(String[] args){
        C obj = new C();
        obj.show();
        obj.display();
    }
}
