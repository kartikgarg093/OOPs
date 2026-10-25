#include <iostream>
using namespace std;

class Calculator{
    public:
    class addition{
        public:
        int add(int a,int b)
        {
            return a+b;
        }
        int add(int a,int b,int c)
        {
            return a+b+c;
        }
    };
    class subtraction{
        public:
        int sub(int a,int b)
        {
            return a-b;
        }
        int sub(int a,int b,int c)
        {
            return a-b-c;
        }
    };
};

int main(){
    
    Calculator::addition s;
    cout<<s.add(12,3);
    cout<<endl<<s.add(21,21)<<endl;
    Calculator::subtraction s1;
    cout<<s1.sub(12,3);
    cout<<endl<<s1.sub(21,21,21);
}