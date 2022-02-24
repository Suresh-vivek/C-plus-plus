/*
Using a base class pointer when we called a overrided function base class
function will be called

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
    Parent *p = new child();
    p-> display();  // Display of Parent
}