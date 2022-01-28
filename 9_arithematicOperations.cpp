// menu driven arithematic operations
// 1.addition 2.subtraction 3.multiplcation ...
#include <iostream>
using namespace std;
int main() {
    
    int option,x,y;
    do{
        cout<<"\nSelect your choice\n";
        cout<<"1.addition\n";
        cout<<"2.subtraction\n";
        cout<<"3.multiplication\n";
        cout<<"4.division\n";
        cout<<"5.modulo\n";
        cout<<"0.Quit\n";
        
        cin>>option;
        
        cout<<"\nEnter 2 numbers : ";
        cin>>x>>y;
    
        switch(option){
            case 0:break;
            case 1 : cout<<x<<" + "<<y<<" = "<<x+y;
                break;
            case 2 : cout<<x<<" - "<<y<<" = "<<x-y;
                break;
            case 3 : cout<<x<<" * "<<y<<" = "<<x*y;
                break;
            case 4 : cout<<x<<" / "<<y<<" = "<<x/y;
                break;
            case 5 : cout<<x<<" % "<<y<<" = "<<x%y;
                break;
            default:cout<<"Invalid option";
        }
        
    }while(option!=0);
    return 0;
}
