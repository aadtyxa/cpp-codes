#include<iostream>
using namespace std;
int main() {
 int a,b;
 cout<< " Enter first number :"<< endl;
 cin>>a;
 cout<< " Enter Second number :"<< endl;
 cin>>b;
 char ch;
 cout<< " Enter operation you want to perform :"<<endl;
 cin>>ch;
 switch( ch ){
    case '+': cout<<(a+b)<<endl;
    break;
    case '-': cout<<(a-b)<<endl;
    break;
    case '*': cout<<(a*b)<<endl;
    break;
    case '/': cout<<(a/b)<<endl;
    break;
    case '%': cout<<(a%b)<<endl;
    break;
    default: cout<< " Enter a valid operation !"<<endl;
 }   
}