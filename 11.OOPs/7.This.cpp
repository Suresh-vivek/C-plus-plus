#include <iostream>
using namespace std;

class Rectangle{

    // privating data members/property
    private:
    int length;
    int breadth;

    public:

    // Constructors
    Rectangle(int length,int breadth){
        this->length= length;
        this->breadth= breadth;
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
    

};

int main(){
    Rectangle r(10,5);
}

