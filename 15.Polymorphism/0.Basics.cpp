/*
Function Overriding
• Redefining a function of base class in derived class
• Function overriding is used for achieving runtime polymorphism
• Prototype of a overrides function must be exactly same as base class function
*/

#include <iostream>
using namespace std;

class Parent{
    public:
    void display(){
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

    Parent p;
    child c;
    p.display();   // Display of Parent
    c.display();   // Display of Child

    c.Parent:: display(); // Display of Parent
}