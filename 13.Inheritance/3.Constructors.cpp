#include <iostream>
using namespace std;

// Parent Class constructors are executed first in Inheritance
class Base{
    public:
    Base(){
        cout<<"Default of base"<<endl;
    }

    Base(int x){
        cout<<"Param of Base "<<x;
    }
};

class Derived : public Base{

    public:
    Derived(){
        cout<<"default of Derived";

    }
    Derived(int a){
        cout<<"Param of Derived"<<a;
    }
    Derived(int x,int a): Base(x){ // calling Parameterized constructor of Base
                                   // Class from derived
        cout<<"Param of Derived"<<a;
    }
};

int main(){
    Derived d;
    Derived b(5);
    Derived a(8,16);
}