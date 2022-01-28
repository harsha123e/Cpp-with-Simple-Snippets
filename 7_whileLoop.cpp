// print hello until user presses q
#include <iostream>
using namespace std;
int main() {

    cout<<"Press q to exit\n";
    char c;
    cout<<"Enter a character : ";
    cin>>c;
    while(c!='q'){
        cout<<"Hello\nEnter a character : ";
        cin>>c;
    }
    return 0;
}
