#include <iostream>
using namespace std;

int main(){
     
    //AddressOf Operator -> &
    int x =10;
    cout<<&x<<endl;

    //It doesn't work on character variable due to operator overloading
    char ch= 'v';
    cout <<&ch <<endl; // it will return v

    // We can find out address of character variable using Explicit Typecasting 
    // converting char datatype to another
    // (char *) -> (void *) or (int *) or (float *)

    cout << (void *)&ch <<endl;


    return 0;
}