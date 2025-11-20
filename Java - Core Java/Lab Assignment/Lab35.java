
public class Lab35 {
    public static void main(String[] args){
        try{
            int a[] = new int[5];
            a[5] = 30/0;
        }catch(ArithmeticException e){
            System.out.println("Arithmetic Error");
        }catch(ArrayIndexOutOfBoundsException e){
            System.out.println("Array Index Error");
        }
    }
}
