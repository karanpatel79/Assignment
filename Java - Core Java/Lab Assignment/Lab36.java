
class InvalidAgeException extends Exception {
    InvalidAgeException(String msg){ super(msg); }
}
public class Lab36 {
    static void validate(int age) throws InvalidAgeException {
        if(age < 18) throw new InvalidAgeException("Not eligible to vote");
        else System.out.println("Eligible");
    }
    public static void main(String[] args){
        try{
            validate(16);
        }catch(Exception e){
            System.out.println("Exception: " + e.getMessage());
        }
    }
}
