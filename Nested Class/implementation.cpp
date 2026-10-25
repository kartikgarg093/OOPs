#include <iostream>
using namespace std;

class outer{
    public:
    class inner{
        public:
        void display(){
            cout<<"This is the inner class";
        }
    };
};

int main(){
    outer::inner obj;
    obj.display();
}