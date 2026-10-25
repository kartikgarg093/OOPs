#include <iostream>
using namespace std;

class Student{
    int id;
    public:
    Student(){
        id=23;
    }
    void display()
    {
         cout<<id<<endl;
    }
};

int main(){
    Student s;
    s.display();

}