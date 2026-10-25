#include <iostream>
#include <memory>
using namespace std;

class Student{
    int x=1;
    public:
    void display()
    {
        cout<<x<<endl;
    }
};

int main(){
    unique_ptr<Student> ptr1=make_unique<Student>();
    ptr1->display();

    unique_ptr<Student> ptr2=move(ptr1);
    ptr2->display();
    ptr1->display();
}