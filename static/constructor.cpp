#include <iostream>
using namespace std;

class Employee{
    static int alivecount;
    public:
    Employee()
    {
        alivecount++;
        cout<<"Employee created. Currently alive "<<alivecount<<endl;
    }
    ~Employee(){
        alivecount--;
        cout<<"Employee destrpyed. Currently alive "<<alivecount<<endl;
    }
};

int Employee::alivecount=0;

int main(){
    Employee e1;
    {
        Employee e2;
        Employee e3;
    }
    cout<<"Back in main()"<<endl;
}