#include <iostream>
using namespace std;

class student{
    public:
    static int rollno;
    student(int rollno)
    {
        this->rollno=rollno;
    }

};
int student::rollno=0;

int main(){
    student s{101};
    cout<<student::rollno;
}