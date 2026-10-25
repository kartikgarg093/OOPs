#include <iostream>
using namespace std;
 class Payment{
    public:
    virtual void pay(int amount)
    {
        cout<<"Paying Rs. "<<amount<<"using generic payment method"<<endl;
    }
 };
 class CreditCard : public Payment{
    public:
    void pay(int amount) override{
        cout<<"Paying rs. "<<amount<<" using Credit Card"<<endl;
    }
 };
 class UPI : public Payment{
    public:
    void pay(int amount) override{
        cout<<"Paying Rs. "<<amount<<"uisng UPI"<<endl;
    }
 };

 int main(){
    Payment* method;
    CreditCard cc;
    UPI upi;
    method=&cc;
    method->pay(5000);
    method=&upi;
    method->pay(200);
    return 0;
 }