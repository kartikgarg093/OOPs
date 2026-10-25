#include <iostream>
using namespace std;

class Distance{
    float meters;
    public:
    Distance(float m)
    {
        meters=m;
    }
    void show(){
        cout<<meters<<endl;
    }
};

Distance d1=5.0f;    // implicit: float-> Distance
Distance d2(12.5f);  // explicit constructor call->same effect

void printDistance(Distance d){
    d.show();
}
int main(){
    printDistance(7.2f); // 7.2f auto-converted
}

