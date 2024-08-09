#include <iostream>
using namespace std;
int main() {
char value;
cout<<"enter a value ";
cin>>value;
if (value >= 'a' && value <= 'z' ){
    cout<<"value is in lowercase"<<endl;
}
else if ( value >=  '0'  && value <= '9'){
cout<<"value is numeric"<<endl;
}
else if( value >= 'A' && value <= 'Z' ) {
cout<<"value is in upper case"<<endl;
} 
else{
    cout<<"please input a valid value"<<endl;
}
}