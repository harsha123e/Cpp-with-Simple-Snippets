// print multiplication table of a given number
#include <iostream>
using namespace std;
int main() {

    int number,range;
    cout<<"Enter a number : ";
    cin>>number;
    cout<<"Enter range of table : ";
    cin>>range;
    for(int i=1;i<=range;i++)
        cout<<number<<"*"<<i<<"="<<number*i<<endl; //e.g. 5*5=25
        
    return 0;
}
