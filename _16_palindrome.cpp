// Palindrome
#include <iostream>
using namespace std;
int main() {
    
    int n,reverse=0,originalN;
    cout<<"Palindrome\n";
    cout<<"Enter a number : ";
    cin>>n;
    originalN=n;
    while(n>0){
        int lastDigit=n%10;
        reverse=(reverse*10)+lastDigit;
        n/=10;
    }
    if(reverse==originalN)
        cout<<"Palindrome";
    else
        cout<<"Not a palindrome";
    
    return 0;
}
