#include<iostream>
using namespace std;
bool lin_search( int array[], int key , int size){
    for (int i = 0; i< size; i++){
if ( array[i] == key){
    return 1;
}
    }
     return 0;
}
int main() {
    int array[10]= { 1 , 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout<<" Enter the element you want to search : "<<endl;
    int key;
    cin>>key;
    if ( lin_search(array, key , 10) == 1){
cout<< "key found" ;
    }
   else cout<<"key not found";


}
