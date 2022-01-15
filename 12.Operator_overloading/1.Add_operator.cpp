/*
write a program to add two complex
*/
#include <iostream>
using namespace std;

class Complex{

    public:
    int real;
    int img;

    public:
    Complex(int r=0, int i=0){

        real=r;
        img=i;

    }

    void display(){
        cout<<real<<"+i"<<img<<endl;
    }

    Complex operator+(Complex x){
        Complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }



};

int main(){
    int c1r,c2r,c1i,c2i;
    cout<<"Enter the first complex number : ";
    cin>>c1r >>c1i;

    cout<<"Enter the second complex number : ";
    cin >> c2r>>c2i;

    Complex c1(c1r,c1i);
    Complex c2(c2r,c2i),c3;

    c3 = c1 + c2;

    c3.display();

    return 0;
}