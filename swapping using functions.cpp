#include<iostream>
using namespace std;
void swap( int&a, int&b){
    int c;
    c=a;
    a=b;
    b=c;
}
int main() {
    int a ,b;
    cout<< " Enter value of a"<<endl;
    cin >> a;
    cout<<"Enter value of b"<<endl;
    cin >> b;
    swap(a,b);
    cout<< "after swapping a is : "<< a <<" and value of b is: "<< b;
}