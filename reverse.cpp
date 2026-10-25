#include <iostream>
using namespace std;
void reverse(int, int &);
 
int main(){
    cout<<"Enter No.: ";
    int n,rev=0;
    cin>>n;
    reverse(n,rev);
    cout<<rev;
    return 0;

}

void reverse(int n,int &rev)
{
    while (n!=0)
    {
        int r=n%10;
        rev=rev*10+r;
        n=n/10;
    }    

}