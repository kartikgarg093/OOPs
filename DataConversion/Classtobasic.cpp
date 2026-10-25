#include <iostream>
using namespace std;

class Distance{
    float meter;
    public:
    Distance(float m){
        meter=m;
    }
    operator float() const{
        return meter;
    }
};

int main(){
    Distance d(5.0f);
    float f=d;
    cout<<(f+2.5f);
}