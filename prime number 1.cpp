#include <iostream>
using namespace std;
int main () {
    int n;
    cout<< " Enter a positive value :"<< endl;
    cin>> n;
    bool isPrime = 1;
    for( int i = 2 ; i < n ; i++){
        if ( n%2 == 0){
            isPrime = 0;
            break;
        }
    }
        if ( isPrime == 0){
            cout<< n <<" is not a prime number"<<endl;
        }
        else{
            cout<< n << " is prime number"<< endl;
        }

    }