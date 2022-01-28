// Fibonacci series
#include <iostream>
using namespace std;
int main() {
    
    int range,t1=0,t2=1,nextTerm;
    cout<<"Fibonacci Series\n";
    cout<<"Enter a range : ";
    cin>>range;
    for(int i=0;i<range;i++){
        cout<<t1<<" ";
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
    }
    return 0;
}
