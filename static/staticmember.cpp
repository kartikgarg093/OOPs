#include <iostream>
using namespace std;

class student{
    public:
    static int total;
    student(){
        total++;
    }
};

int student::total=0;

int main(){
    student s1,s2,s3;
    cout<<"Total Students: "<<student::total<<endl;
    
}
