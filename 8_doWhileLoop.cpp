// print hello until user presses q
#include <iostream>
using namespace std;
int main() {

    char c;
    
    cout<<"Press q to exit\n";
    do{
        cout<<"Hello\nEnter a character : ";
        cin>>c;
    }while(c!='q');
    
    return 0;
}
