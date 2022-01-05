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
   
   // Creating objects
   Rectangle *p; // will create a pointer p in stack/Static memory
   p = new Rectangle; // will create an object in Heap/Dynamic memory whose pointer is p;

   Rectangle *q = new Rectangle;

   // Accessing data members
   p -> length = 12, q->length= 18;
   p ->breadth = 5, q ->breadth = 9;

   cout << p->area()<<endl;
   cout<< q-> area()<<endl;

   
    
}