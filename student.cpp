#include <iostream> 
using namespace std;

class student{
    static int rollno;
    int marks;
    string name;
    public:
    student(string nme,int mrks){
        marks=mrks;
        name=nme;
        rollno++;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Rollno.: "<<rollno<<endl;
        cout<<"Marks: "<<marks<<endl;

    }
};
int student::rollno=100;

int main(){
    student s1{"Kartik",67};
    s1.display();
    student s2{"Hejaj",78};
    s2.display();

}
