#include <iostream>
using namespace std;

class employee{
    public:
    int id;
    string name;
    void display(){
        cout<<"ID. "<<id<<endl;
        cout<<"Name "<<name<<endl;
    }
};

int main(){
    employee *emp=new employee;
    emp->id=101;
    emp->name="Kartik";
    emp->display();
    delete emp;
}