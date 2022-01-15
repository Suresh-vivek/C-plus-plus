#include <iostream>
using namespace std;

class Rectangle{
    // By default a class is private
    //data members
    public:
    int length;
    int breadth;

    //functions
    int area(){
        return length * breadth;
    }

    int perimeter(){
        return 2*(length + breadth);
    }

    /*
    Size of class Rectangle 
        4  + 4 = 8 Bytes
        function don't occupy any memory
    */
};

int main(){
    Rectangle r;

    // acessing data members
    r.length = 10;
    

    // Creating pointer
    Rectangle *p; // Static pointer created in stack
    p= &r;

    // accessing through Pointers
    p -> length = 15; // it will re-assign length to 15
    p -> breadth = 20;
    cout<< p -> area()<<endl;

    
}