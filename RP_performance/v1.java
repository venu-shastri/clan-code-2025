

// UPI Payment implementation
class UPIPaymentStrategy {
    public void pay() {
        System.out.println("Payment Done Using UPI");
    }
}

// Netbanking Payment implementation
class NetbankingPaymentStrategy {
    public void pay() {
        System.out.println("Payment Done Using Netbanking");
    }
}

// Credit Card Payment implementation
class CreditCardPaymentStrategy {
    public void pay() {
        System.out.println("Payment Done Using Credit Card");
    }
}

// A function to make payment using the given strategy
public class PaymentProcessor {

    public static void makePayment(??? strategy) {
        strategy.pay();
    }

    public static void main(String[] args) {
        PaymentStrategy upi = new UPIPaymentStrategy();
        PaymentStrategy netbanking = new NetbankingPaymentStrategy();
        PaymentStrategy creditCard = new CreditCardPaymentStrategy();

        makePayment(upi);
        makePayment(netbanking);
        makePayment(creditCard);
    }
}
