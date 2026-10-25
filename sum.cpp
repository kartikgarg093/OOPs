#include <iostream>
using namespace std;

class sum{
    private: int a,b;
    public:
    void set(){
        cout<<"Enter 1st NO.: ";
        cin>>a;
        cout<<"Enter 2nd NO.: ";
        cin>>b;
    }
    int add()
    {
        cout<<"Sum = "<<a+b;
        return 0;
    }
};

int main()
    {
        sum s;
        s.set();
        s.add();
        return 0;
    }
