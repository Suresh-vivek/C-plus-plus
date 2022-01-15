/*
Write aprogram to add two Rational number using class

*/
#include <iostream>
using namespace std;
class Rational{

    private:
    int num;
    int den;

    public:

    // Constructor -> defalut value is (1,1)
    Rational(int p=1,int q=1){
        num=p;
        den =q;
    }

  friend  Rational operator+(Rational r1,Rational r2 );

  friend ostream & operator<<(ostream &out,Rational &r);

    

};

Rational operator+(Rational r1,Rational r2){
    Rational temp;
    temp.num = (r1.num * r2.den) + (r2.num * r2.den);
    temp.den = r1.den * r2.den; 
    return temp;
}

ostream & operator<<(ostream &out,Rational &r){
    out<< r.num <<"/"<<r.den;
    return out;
}

int main(){
    
    int n1,n2,d1,d2;
    cout<<"Enter the first rational number : ";
    cin>>n1>>d1;
    cout <<"Enter the second rational number :";
    cin>>n2>>d2;

    Rational r1(n1,d1),r2(n2,d2),r3;

    r3 = r1 + r2;
    cout<< r3 <<endl;

    return 0;
}