// Online C++ compiler to run C++ program online
#include <iostream>
class UPIPaymentStratergy{
    
    public :
       void pay(){std::cout<<"Payment Done Using UPI"<<std::endl; }
      
};
class NetbankingPaymentStratergy{
    public :
       void pay(){std::cout<<"Payment Done Using Netbanking"<<std::endl; }
    
};
class CreditCardPayamentStratergy{
    public :
       void pay(){std::cout<<"Payment Done Using Credit Card"<<std::endl; }
    
};


void makePayment(??? *paymentStratergy){
    paymentStratergy->pay();
}

int main() {
   UPIPaymentStratergy upi;
   makePayment(&upi);
   
   NetbankingPaymentStratergy nb;
   makePayment(&nb);
   
   CreditCardPayamentStratergy ccp;
   makePayment(&ccp);
   
   

    return 0;
}
