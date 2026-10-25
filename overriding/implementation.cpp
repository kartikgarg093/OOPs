#include <iostream>
using namespace std;

class Account{
    public:
    void withdraw(){
        cout<<"Withdrawing with standard rules"<<endl;
    }
};
class SavingAccount : public Account{
    public:
    void withdraw(){
        cout<<"Withdrawing with savings account limits"<<endl;
    }
};

int main(){
    SavingAccount sa;
    sa.withdraw();
     Account* a=&sa;
     a->withdraw();
     

}