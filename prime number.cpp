#include <iostream>
using namespace std;

int main() {
    int n;
    cout << " Enter any positive number you want to check :" << endl;
    cin>> n;
    for ( int i = 2; i < n; i++){

if ( n%i==0){
    cout<< n << " is not a prime number" << endl;
    break;
}
    else{
    cout<< n << " is a prime number" << endl;
    break;
}}
    if ( n < 0){
        cout<< "Enter a valid number" << endl;
    }
    else if ( n == 0){
        cout << n << " is not a prime number" <<endl;
    }
    else if ( n == 1 ){
        cout<< n <<" it is not a prime number" <<endl;
    }
    else if ( n == 2){
        cout<< n << " is a prime number"<< endl;
    }
}