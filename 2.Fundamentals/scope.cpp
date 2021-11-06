/*
Scope -> Defined for variables(accessible-> how a variable can be accesed )

Type of Scopes
1. Local Scope (inside the Function-> int main())
2. Global Scope(defined ouside of the function)
*/



#include <iostream>
using namespace std;

int x =100;


int main(){
    cout<<x<<endl; // It will print 100
     
    int x=10;
    cout<<x<<endl; //it will print 10

    for(x=0;x<=5;x++){
        cout<<x<<endl;
        /*
        it will print 
        0
        1
        2
        3
        4
        5

        */
    }

    /*
    we cannot define two variables having same name and scope
    int x=10;
    int x = 20;
    this will result in error
    */
    
    cout<<x<<endl;
    // it will print 6


    //code to print Global x
    cout<<"Global x is "<<::x<<endl;


    for(int x=0;x<=3;x++){
        //here we are redefining x it has local scope in loop
        cout<<"Local for loop scope x is "<<x<<endl;
        cout<<::x<<endl;
    }
     cout<<x<<endl;
     //it will print 6 because after the first for loop value of x becomes 6



}
