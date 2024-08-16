#include <iostream>
#include<limits.h>
using namespace std;
int main() {
   int ans = INT_MIN;
   int array[5] = {1, 2, 3, 4, 5};
   
   for(int i = 0; i < 5; i++)
   {
    if (array[i] > ans)
        ans = array[i];
    
    }
    cout<<"Maximum value in the given array is : "<<ans;
    
}