// Arrays
#include <iostream>
using namespace std;
int main() {
    
    int a[5] = {1,2,3,4,5};
    int b[5];
    
    cout<<"Array 1 : ";
    for(int i=0;i<5;i++)
        cout<<a[i]<<" ";
    
    cout<<"\nEnter 5 numbers into array : ";
    for(int i=0;i<5;i++)
        cin>>b[i];
    
    cout<<"Array 2 : ";
    for(int i=0;i<5;i++)
        cout<<b[i]<<" ";
    
    return 0;
}
