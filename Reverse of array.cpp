#include<iostream>
using namespace std;
int main() {
    int array[100];
    int start, stop,size;
    cout<<"Enter the size of array : "<<endl;
    cin>>size;
    cout<<"Enter the elements of array : "<<endl;
    for(int i =0; i < size; i++){
        cin>>array[i];
    }
     start = 0;
    stop = size - 1;
    
    while(start<stop){
   
  swap(array[start],array[stop]);
  start++;
  stop--;  }
  cout<<"Reversed array is : ";
  for( int i=0; i< size; i++){
  
  cout<<array[i]<<" ";
}}