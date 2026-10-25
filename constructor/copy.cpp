#include <iostream>
using namespace std;

class Student{
    int id;
    public:
    Student(int x)
    {
        id=x;
    }
    Student(Student& s){
        id=s.id;
    }
    void display()
    {
         cout<<id<<endl;
    }
};

int main(){
    Student s{23};
    Student s1{s};
    s1.display();

}