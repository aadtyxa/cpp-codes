#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"Enter the number till its sum"<<endl;
    cin>>n;
    int i = 1;
    int sum = 0;
    while ( i <= n) {
        sum = sum + i ;
        i = i + 1;
    }

    cout<< "sum of nth term is :" << sum <<endl;
    

}