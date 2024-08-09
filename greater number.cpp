 #include <iostream>
 using namespace std;
 int main() {
    int a,b;
    cout<<"enter two number a and b : "<<endl;
    cin>>a>>b;
    if ( a>b){
cout<<a<<" "<< " is greater than "<<b<<endl;
    }
    else if (a<b){
        cout<<b <<" "<<"is greater than "<<a<<endl;
    }
    else{
        cout<<a <<"and"<<b<<" are equal"<<endl;
    }
 }