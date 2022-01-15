#include <iostream>
using namespace std;

class Rectangle{

    // privating data members/property
    private:
    int length;
    int breadth;

    public:

    // Constructors
    Rectangle(int l=1,int b=1);
    Rectangle(Rectangle &r);
    
    // Mutators
    void setLength(int l);
    void setBreadth(int b);

    // Accessors
    int getLength();
    int getBreadth();
    
    // Feciliators
    int area();
    int Perimeter();
    
    //Inspectors
    bool isSquare();

    // Destructors
    ~Rectangle();
    

    
};

// Scope Resolution
Rectangle ::Rectangle(int l=1,int b=1){
        setLength(l);
        setBreadth(b);
        // Here default value is 1,1
    }

    // Copy Constructor
Rectangle :: Rectangle(Rectangle &r){
        length = r.length;
        breadth = r.breadth;
    }


void Rectangle ::setLength(int l){
        if(l >=0 ){
            length =l;
        }
        else{
            cout<<"Length can't be negative "<<endl;
            l =0;
        }
    }

void Rectangle :: setBreadth(int b){
        if(b >= 0){
            breadth = b;
        }
        else{
            cout<<"Length can't be negative "<<endl;
            b =0;
        }

    }

int Rectangle :: getLength(){
        return length;
    }

int Rectangle :: getBreadth(){
        return breadth;
    }
    
int Rectangle :: area(){  
        return length * breadth;
        // it's an inline function

    }
    
int Rectangle::Perimeter(){
    return 2*(length + breadth);


}

bool Rectangle::isSquare(){
    return length=breadth;
}

Rectangle :: ~Rectangle(){
    cout<<"Rectangle Destroyed"<<endl;
}



int main(){
    Rectangle r(10,5);
    cout<< r.area()<<endl;
    cout << r.Perimeter()<<endl;
    if(r.isSquare()){
        cout<<"Yes"<<endl;
    }
}