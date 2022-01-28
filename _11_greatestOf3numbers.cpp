// Greatest of 3 numbers
#include <iostream>
using namespace std;
int main() {
    
    int x,y,z;
    cout<<"Greatest of 3 numbers\n";
    cout<<"Enter 3 numbers : ";
    cin>>x>>y>>z;
    if(x>=y && x>=z)
        cout<<x;
    else if(y>=x && y>=z)
        cout<<y;
    else
        cout<<z;
    return 0;
}
