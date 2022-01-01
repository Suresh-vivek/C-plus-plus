#include <iostream>
using namespace std;

int main(){
    
    /*
    Pointers -> it's a variable which stores the address of another variable

    Syntax -> Datatype * pointer_name

    size of pointer -> It is System Dependent
    32 Bit system -> 4 Bytes
    64 Bit System -> 8 Bytes


    */

    //Decleration and Intialization
    int x = 10;
    int *y = &x;

    int a = 10;
    int *b; b = &a;

    float c = 10.5;
    float *d= &c;

    // We should avoid storing the address of variable of different datatupe in pointer
    

    //Re-assign another address to the variable
    int x1 = 10;
    int x2 = 12;

    int * x1ptr = &x1;
    cout<< x1ptr<<endl;
    cout<< *x1ptr <<endl;
    x1ptr = &x2;
    cout<< x1ptr<<endl;
    cout<< *x1ptr <<endl;

    cout<<*x1ptr + 1<<endl; // 13
    cout << *(x1ptr + 1)<<endl; // it will give some unknown value


    /*
    Derefrence operator -> *
    *Bucket -> address
    *address -> Bucket
    */

    int v = 15;
    int *vptr;
    vptr = &v;

    cout<<&v<<endl;
    cout << vptr <<endl;
    cout<<endl;

    cout<< *(&v) <<endl;
    cout<< *(vptr) <<endl;
    cout << endl;

    cout<< *(&vptr) <<endl;
    cout << &(*vptr) <<endl;

    cout<< &vptr <<endl;

    // Double Pointer
    int r = 15;
    int *rptr = &r;
    
    cout<< rptr <<endl;

    int **rrptr= &rptr;
    cout<< rrptr <<endl;

    

    return 0;
}