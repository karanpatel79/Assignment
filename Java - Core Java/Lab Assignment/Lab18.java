
class Box {
    int length, width;
    Box() 
    { 
        length = width = 0; 
    }
    Box(int l) 
    { 
        length = width = l; 
    }
    Box(int l, int w) 
    { 
        length = l; width = w; 
    }

    void display()
    { 
        System.out.println("L=" + length + " W=" + width); 
    }
}
public class Lab18 {
    public static void main(String[] args)
    {
        new Box().display();
        new Box(5).display();
        new Box(4,7).display();
    }
}
