#include <iostream>
using namespace std;

class Student{
    public:
    int marks;
};

void display(const Student& s){
    cout<<s.marks<<endl;
}

int main(){
    Student st{34};
    display(st);
}