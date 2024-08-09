#include <iostream>
using namespace std;
int main() {
    int a , b;
    cout<<"Enter any two numbers"<<endl;
    cin>> a >> b;
    cout<<" for Addition press 1"<< endl << " for Subtraction press 2" << endl << " for Multiplication press 3" << endl << " for Division press 4"<< endl <<" for Square Root press 5";
    int sum,sub, multi, div, Square;
    sum = a + b;
    cout<<sum;
    sub = a - b;
    cout<<sub;
    multi = a * b;
    cout<<multi;
    div = a / b;
    cout<<div;
    Square = a * a;
    
    int action;
    cin>> action;
    if (action == 1 ){
        cout<<" Addition of a and b is "<< sum << endl;
    }
        else if (action == 2 ){
            cout<< " Subtraction of a and b is " << sub << endl;
        }
        else if ( action == 3){
            cout<<" Multiplication of a and b is " << multi << endl;

        } 
        else if ( action == 4){
            cout<<" Division of a and b is " << div << endl;
        }
        else if ( action == 5){
            cout<<"Square Root of a is "  << Square << endl;
        }
        else {
            cout<< "Choose a valid value " << endl;
        }
    
}