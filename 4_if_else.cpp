// Given number is positive negative or zero
#include <iostream>
using namespace std;
int main() {

    int x;
    cout<<"Enter a number : ";
    cin>>x;
    if(x>0)
        cout<<"Positive number";
    else if(x<0)
        cout<<"Negative number";
    else
        cout<<"Given number is Zero";
    return 0;
}
