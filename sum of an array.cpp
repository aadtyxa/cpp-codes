#include<iostream>
using namespace std;
int main() {
    int size;
    cout<< " Enter the size of an array : ";
    cin>>size;
    int array[500];
    cout<<" Enter theb elements of array:"<<endl;
    for ( int a = 0; a < size ; a++ ) {       
        cin>>array[a];
    }
        int sum =0;
            for ( int i = 0; i <size; i++){
            sum = sum + array[i];
       
    }
            cout<<" Sum of given array is : "<< sum;

    }