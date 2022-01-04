#include <iostream>
using namespace std;

int main(){
    int x; //It creates a bucket on static memory

    int *ptr = new int; 
    /*
    It creates a bucket on Heap/Dynamic memory 
    ptr is created on static memory but contains the address of new int which is created on Dynamic
    memory.
    By this way we can create a very large araay also.
    */          

   int a[1000];
   cout<<sizeof(a)<<endl; // 4000 Bytes

   int *b= new int[1000000];
   /*
   It will create an array of 1000000 elements on Dynamic memory and b stores the adress of array.
   */
  cout<<sizeof(b)<<endl; // 4/8 Bytes depending upon system.



}