#include <iostream>
using namespace std;

class Rectangle{

    private:
    int length;
    int breadth;

    public:

    // Constructor
    Rectangle(int l=0,int b=0){
        setLength(l);
        setBreadth(b);
    }

    Rectangle(Rectangle &r){
        length = r.length;
        breadth = r.breadth;
    }

    // Accessors
    int getLength(){
        return length;
    }
    
    int getBreadth(){
        return breadth;
    }


    // Mutators
    void setLength(int l){
        length = l;
    }

    void setBreadth(int b){
        breadth = b;
    }

    // Feciliators

    int perimeter(){
        return 2* (length + breadth);
    }

    int area(){
        return length * breadth;
    }


};

class Cuboid : public Rectangle{

    private:
    int height;

    public:

    // Constructor

    Cuboid(int l=0,int b=0,int h=0){
        setHeight(h);
        setLength(l);
        setBreadth(b);
    }

    // Accessors for height
    int getHeight(){
        return height;
    }

    // Mutators for height
    void setHeight(int h){
        height = h;
    }

    // Feciliators
    int volume(){
        return getLength() * getBreadth() * height;
    }

    int surfaceArea(){
        return 2 * (getLength()*getBreadth() + getBreadth()*height + height*getLength());
    }




};

int main(){
    
    int l,b,h;
    cout<<"Enter the length, breadth and Height : ";
    cin>>l>>b>>h;

    Cuboid c(l,b,h);
    
    cout<<"Surface area of the cuboid is : "<<c.surfaceArea()<<endl;
    cout<<"Volume of the cuboid is : "<<c.volume()<<endl;

    return 0;
}