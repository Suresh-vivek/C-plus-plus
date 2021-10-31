#include <iostream>
#include <climits>
using namespace std;

int main(){
    //Types of Modifiers
    //Long , Short , Signed , Unsigned

    int x;

    cout << sizeof(x) <<endl;
    cout << INT_MAX <<endl;
    cout <<INT_MIN <<endl;
    
    x = INT_MAX;

    // What will happen if you add 1 to x ?
    x = x+ 1 ;
    cout << x <<endl;

    // Ans-  -2147483647
    // This Phenomenon is called WRAP AROUND, if we try to exceed the limit of any datatype this
    //happens,we end up at other side.

    
}