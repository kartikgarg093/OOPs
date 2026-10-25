#include <iostream>
using namespace std;

class Box{
    private:
    int value=20;
    public:
    friend void show(Box b);

};

void show(Box b)
{
    cout<<b.value;
}

int main(){
    Box s;
    show(s);
}

