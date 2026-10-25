#include <iostream>
using namespace std;
 class Student{
    private:
    int rollno;
    string s;
    public:
    Student(int r,string a)
    {
        rollno=r;
        s=a;
    }
    Student() : Student(101,"Kartik")
    {
        cout<<"Default constructor called "<<endl;
    }
    void display()
    {
        cout<<s<<endl<<rollno;
    }

 };
 int main()
 {
    Student s;
    s.display();
    return 0;
 }
