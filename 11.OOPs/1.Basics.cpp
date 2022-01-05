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
     
    /* 
    Creating objects/instances of class Rectangle
    Classes are used to create user defined Data-Types
    Rectangle is a datatype
    */

   Rectangle r1,r2;

   // Accessing Data Members after making them public
   r1.length = 10,r2.length=20;
   r1.breadth = 20, r2.breadth=40;

   // Calling Functions
   cout<<"Area of r1 is "<<r1.area() <<endl;
   cout<<"Area of r2 is "<<r2.area() <<endl;

    return 0;
}