
interface PaymentGateway 
{
    void pay(double amount);
}
class Paytm implements PaymentGateway
 {
    public void pay(double amount)
    { 
        System.out.println("Paid Rs." + amount + " via Paytm"); 
    }
}
class GooglePay implements PaymentGateway 
{
    public void pay(double amount){ System.out.println("Paid Rs." + amount + " via Google Pay"); }
}
public class Lab27 {
    public static void main(String[] args){
        PaymentGateway pg = new GooglePay();
        pg.pay(500);
    }
}
