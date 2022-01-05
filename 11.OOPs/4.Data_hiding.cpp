#include <iostream>
using namespace std;

class Rectangle{

    // privating data members/property
    private:
    int length;
    int breadth;

    public:

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
    set____ -> Accessors
    ger____ -> Mutators
    */
};

int main(){
    Rectangle r;

    r.setLength(10);
    r.setBreadth(15);

    cout<<"Length is "<<r.getLength()<<endl;
    cout<<"Breadth is "<<r.getBreadth()<<endl;

    cout<< "Area is "<<r.area()<<endl;

}