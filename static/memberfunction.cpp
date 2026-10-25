#include <iostream>
using namespace std;

class student{
    public:
    static int total;
     static void count(){
        cout<<"Count :"<<total;
    }
};

int student::total=0;

int main(){
    
    student::count();
}
