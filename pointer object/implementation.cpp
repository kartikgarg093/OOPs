#include <iostream>
using namespace std;

class student{
    public:
    int rollno;
    string name;
    void display(){
        cout<<"Roll No.: "<<rollno<<endl;
        cout<<"Name: "<<name<<endl;
    }

};

int main(){
    student s;
    //s.rollno=101;
    //s.name="kartik";
    student *ptr=&s;
    ptr->rollno=101;
    ptr->name="Kartik";
    ptr->display();
}