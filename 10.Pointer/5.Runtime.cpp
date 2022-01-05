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

  /*
  If we want to reassign b first we have to delete it then create another array.
  if we reassign b witout deleting it , the older array will stil exists on the Dynamic
  Memory and will create a MEMORY LEAK.

  */

   // to delete
   delete [] b;

   // Reassigning new size
   b= new int[500];




}