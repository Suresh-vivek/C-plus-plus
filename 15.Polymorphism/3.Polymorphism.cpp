/*
Polymorphism

Same name diﬀerent actions
Runtime Polymorphism is achieved using function overriding
Virtual functions are abstract functions of base class
Derived class must override virtual function
Base class pointer pointing to derived class object and a override function is called
Summary: class car is defined, then sub classes override, then base class method made as
virtual the pure virtual
*/

#include <iostream>
using namespace std;

class Car{
    public:
    virtual void start() = 0; //pure virtual functions
    virtual void stop() = 0; //pure virtual functions
};

class Innova : public Car{
    public:
    void start(){
        cout<<"Innova Started"<<endl;
    }
    void stop(){
        cout<<"Innova Stopped"<<endl;
    }

};

class Swift : public Car{
    public:
    void start(){
        cout<<"Swift Started"<<endl;
    }
    void stop(){
        cout<<"Innova Stopped"<<endl;
    }

};

int main(){
    Car *c = new Innova;
    c ->start();  //Innova Started
    c= new Swift;
    c-> start();  // Swift Started
    
} 