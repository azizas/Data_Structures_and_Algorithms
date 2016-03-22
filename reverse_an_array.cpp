#include <iostream>
using namespace std;
int * swapArray (int *ar, int base , int last)
{
int temp ; 
temp = ar[base] ; 
ar[base] = ar[last];
ar[last] = temp ; 
return ar ; 
}
int main()
{
  

  int arr[]= {1,2,3,4,5,6,7,8,9,10}; 

int i = 0 ; 
 int X = (sizeof(arr)/sizeof(int));   



for (i = 0 ; i<X/2 ; i++)
{
 swapArray(arr,i,X-i-1);

}
 for (int i = 0 ; i<X ; i++)
 {
    cout<<arr[i]<<" "; 
 }
int half  = X/2 ; 


    cout<<endl; 
     return 0;
}

