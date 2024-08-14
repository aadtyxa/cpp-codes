#include<iostream>
using namespace std;

bool isEVEN(int a ){
if(a&1){
    return 0;
}
return 1;
}

int main() {
    int num;
    cin>>num;
    if(isEVEN(num)){
        cout<<" is even";
    }
    else {
        cout<< " is Od0d";
    }
}