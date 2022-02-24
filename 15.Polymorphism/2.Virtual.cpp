/*
if a base class pointer has a virtual function and overrided fuction called 
using a base class pointer , Derived class function will be called.

*/


#include <iostream>
using namespace std;

class Parent{
    public:
    virtual void display(){
        cout<<"Display of Parent"<<endl;
    }
};
class child: public Parent{
    public:
    void display(){
        cout<<"Display of Child "<<endl;
    }
};

int main(){
    Parent *p = new child();
    p-> display();  // Display of Child
}