// Factorial
#include <iostream>
using namespace std;
int main() {
    
    int number,fact=1;
    cout<<"Factorial\n";
    cout<<"Enter a number : ";
    cin>>number;
    for(int i=1;i<=number;i++)
        fact*=i;
    cout<<fact;
    
    return 0;
}
