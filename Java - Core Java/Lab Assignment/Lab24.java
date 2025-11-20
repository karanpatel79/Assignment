
class Animal {
    Animal(){ System.out.println("Animal Constructor"); }
    void eat(){ System.out.println("Eating"); }
}
class Dog extends Animal {
    Dog(){
        super();
        System.out.println("Dog Constructor");
    }
    void eat(){
        super.eat();
        System.out.println("Eating bread");
    }
}
public class Lab24 {
    public static void main(String[] args){
        Dog d = new Dog();
        d.eat();
    }
}
