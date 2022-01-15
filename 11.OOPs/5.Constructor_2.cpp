//Parameterized and Copy Constructor

#include <iostream>
using namespace std;

class Rectangle{

    // privating data members/property
    private:
    int length;
    int breadth;

    public:

    // Constructors- Parameterized
    Rectangle(int l=1,int b=1){
        setLength(l);
        setBreadth(b);
        // Here default value is 1,1
    }

    // Copy Constructor
    Rectangle(Rectangle &r){
        length = r.length;
        breadth = r.breadth;
    }


    void setLength(int l){
        if(l >=0 ){
            length =l;
        }
        else{
            cout<<"Length can't be negative "<<endl;
            l =0;
        }
    }

    void setBreadth(int b){
        if(b >= 0){
            breadth = b;
        }
        else{
            cout<<"Length can't be negative "<<endl;
            b =0;
        }

    }

    int getLength(){
        return length;
    }

    int getBreadth(){
        return breadth;
    }
    
    int area(){
        return length * breadth;

    }

    int perimeter(){
        return 2*(length + breadth);
    }
    

    /*
    set and get function are property function
    get____ -> Accessors
    set____ -> Mutators
    */
};

int main(){

    // Accessing constructor
    Rectangle r1(12,5); // l=12,b=5
    Rectangle r2(12);   // l=12 ,b=1
    Rectangle r3;  // l=1,b=1
    Rectangle r4(r1); // l=12,b=5

    Rectangle r;
    int l,b;

    cout<<"Enter the length "<<endl;
    cin>>l;
    
    cout<<"Enter the breadth "<<endl;
    cin>>l;


    r.setLength(l);
    r.setBreadth(b);

    cout<<"Length is "<<l<<endl;
    cout<<"Breadth is "<<b<<endl;

    cout<< "Area of r is"<<r.area()<<endl;
    cout<< "Area of r1 is "<<r1.area()<<endl;// Area is 60
    cout<< "Area of r2 is "<<r2.area()<<endl; // Area is 1
    cout<<"Area of r3 is " << r3.area()<<endl; // Area is 1
    cout<<"Perimeter is "<<r.perimeter()<<endl;
    cout<<"Area of r4 is same as r3 that is "<<r4.area()<<endl;

}