#include <iostream>
using namespace std;

class Student{
    int id;
    public:
    Student(int x){
        id=x;
    }
    void display()
    {
         cout<<id<<endl;
    }
};

int main(){
    Student s{5445};
    s.display();

}