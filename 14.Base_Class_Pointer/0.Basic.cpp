#include <iostream>
using namespace std;


class Base{
    public:
       void fun1(){
           cout<<"Fun1 of base "<<endl;
       }
};

class Derived : public Base{
    public:
    void fun2(){
        cout<<"Fun2 of Derived "<<endl;
    }
};

int main(){

    Base *p;
    p = new Derived();
    p-> fun1();

    /*
    If you have a base class pointer and a derived class object attached to it
    you can call only those functions which are present in base class


    you can't have a pointer of Derived class and object of base class
    */
    



    return 0;
}