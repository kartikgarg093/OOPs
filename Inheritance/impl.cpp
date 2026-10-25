#include <iostream>
using namespace std;
 class Person{
    public:
    int age;
    string name;
 };

 class Info : public Person{
    public:
    int rollno;
    void get()
    {
        cin>>name;
        cin>>age;
        cin>>rollno;
    }
    void show()
    {
        cout<<"RollNO.: "<<rollno<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
    

 };


 int main()
 {
    Info s2;
    
    s2.get();
    s2.show();
 }