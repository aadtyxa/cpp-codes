#include<iostream>
using namespace std;

bool isEven(int n) {
if(n % 2 == 0){
    return 1;
}
return 0;
}

int main() {
    int a;
    cout<< " Enter any number :"<<" ";
    cin>>a;
    if(isEven(a)==1){
        cout<<"It is even.";
    }
    else{
        cout<< " It is odd. ";
    }
}