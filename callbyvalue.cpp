#include <iostream>
using namespace std;
void swap(int,int);

 int main(){
    int a=10;
    int b=20;
    cout<<"before swap"<<endl;
    cout<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"After swap"<<endl;
    cout<<a<<" "<<b;
    return 0;
}
 void swap(int x,int y)
 {
    int c=x;
    x=y;
    y=c;
 }