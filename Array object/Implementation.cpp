#include <iostream>
using namespace std;

class student{
    public:
    int rollno;
    string name;
    void input(){
        cin>>rollno;
        cin>>name;
    }
    void display(){
        cout<<"Roll No.: "<<rollno<<endl;
        cout<<"Name: "<<name<<endl;
    }

};

int main()
{
    student students[3];
    for(int i=0;i<3;i++)
    {
        students[i].input();
    }
    for(int i=0;i<3;i++)
    {
        students[i].display();
    }
    return 0;
}