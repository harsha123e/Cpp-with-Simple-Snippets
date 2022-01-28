// Odd or Even Program
#include <iostream>
using namespace std;
int main() {
    
    int number;
    cout<<"Odd or Even Number\n";
    cout <<"Enter a number : ";
    cin>>number;
    if(number%2==0)
        cout<<"Even number";
    else
        cout<<"Odd number";
    return 0;
}
