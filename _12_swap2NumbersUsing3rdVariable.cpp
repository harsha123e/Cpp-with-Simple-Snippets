// Swapping 2 numbers using 3 variable
#include <iostream>
using namespace std;
int main() {
    
    int x,y,temp;
    cout<<"Swapping 2 numbers using 3 variable\n";
    cout<<"Enter 2 numbers : ";
    cin>>x>>y;
    cout<<"Before swapping x : "<<x<<" y : "<<y<<endl;
    temp=x;
    x=y;
    y=temp;
    cout<<"After swapping x : "<<x<<" y : "<<y<<endl;
    
    return 0;
}
